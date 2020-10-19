#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS

#include <Winsock2.h>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <vector>
#include <string>
#include <map> 
#include <fstream>

#include <iostream>
#include "SerialPort.h"

using namespace std;

string portName = "\\\\.\\";
DWORD BaudRate = CBR_256000;
const char* portNameConstChar;
#define MAX_DATA_LENGTH 256
SerialPort* arduino;
char incomingData[MAX_DATA_LENGTH];
#define SEND



#pragma comment(lib, "ws2_32.lib")

#pragma pack(push, 1)

struct HWINFO_SENSORS_READING
{
	unsigned int readingType;
	unsigned int sensorIndex;
	unsigned int readingId;
	char labelOriginal[128];
	char labelUser[128];
	char unit[16];
	double value;
	double valueMin;
	double valueMax;
	double valueAvg;
};

struct HWINFO_SENSORS_SENSOR
{
	unsigned int sensorId;
	unsigned int sensorInst;
	char sensorNameOriginal[128];
	char sensorNameUser[128];
};

struct HWINFO_SENSORS_SHARED_MEM2
{
	unsigned int signature;
	unsigned int version;
	unsigned int revision;
	long long int pollTime;
	unsigned int sensorOffset;
	unsigned int sensorSize;
	unsigned int sensorCount;
	unsigned int readingOffset;
	unsigned int readingSize;
	unsigned int readingCount;
};

struct MAHM_SHARED_MEMORY_ENTRY
{
	char name[MAX_PATH];
	char units[MAX_PATH];
	char localName[MAX_PATH];
	char localUnits[MAX_PATH];
	char format[MAX_PATH];
	float data;
	float minLimit;
	float maxLimit;
	unsigned int flags;
};

struct MAHM_SHARED_MEMORY_HEADER
{
	unsigned int signature;
	unsigned int version;
	unsigned int headerSize;
	unsigned int entryCount;
	unsigned int entrySize;
	int time;
};

#pragma pack(pop)

#define	MAHM_SHARED_MEMORY_ENTRY_FLAG_SHOW_IN_OSD  0x00000001
#define	MAHM_SHARED_MEMORY_ENTRY_FLAG_SHOW_IN_LCD  0x00000002
#define	MAHM_SHARED_MEMORY_ENTRY_FLAG_SHOW_IN_TRAY 0x00000004

enum class HwinfoReadingType
{
	None,
	Temp,
	Voltage,
	Fan,
	Current,
	Power,
	Clock,
	Usage,
	Other
};

const unsigned int EntryTotalCount = 1024;
bool EntryEnabled[EntryTotalCount] = {0};

unsigned int Port = 60000;

bool Hwinfo = true, Gpuz = false, Afterburner = false;
bool LogFileEnable = false;

// Sensor Entries Map that's filled by reading the config file
map<string, int> sensorEntries;
map<string, int>::iterator it;
vector<HWINFO_SENSORS_READING> sensorVector;

#define LOG(expression) Log(#expression, strrchr(__FILE__, '\\') + 1, __LINE__, (intptr_t) (expression))

FILE *LogFile = 0;

intptr_t Log(const char *expression, const char *fileName, unsigned int line, intptr_t result)
{
	if (LogFile)
	{
		time_t t = time(0);
		tm *local = localtime(&t);

		fprintf(LogFile, "[%02d.%02d.%04d %02d:%02d:%02d][%8s:%04d] %-102s %-20zd (0x%0*zX)\n",
				local->tm_mday, local->tm_mon + 1, local->tm_year + 1900, local->tm_hour, local->tm_min, local->tm_sec, fileName, line, expression, result, (unsigned int) sizeof(result) * 2, result);

		fflush(LogFile);
	}

	return result;
}

size_t UnicodeToUtf8(const wchar_t *unicode, char **utf8)
{
	size_t utf8Size = 0;

	size_t unicodeSize = wcslen(unicode);

	if (unicodeSize > 0)
	{
		LOG(utf8Size = WideCharToMultiByte(CP_UTF8, 0, unicode, (int) unicodeSize, 0, 0, 0, 0));

		if (utf8Size > 0)
		{
			if (utf8)
			{
				LOG(*utf8 = (char*) malloc(utf8Size * sizeof(char)));

				if (*utf8)
				{
					LOG(utf8Size = WideCharToMultiByte(CP_UTF8, 0, unicode, (int) unicodeSize, *utf8, (int) utf8Size, 0, 0));

					if (utf8Size == 0)
						free(*utf8);
				}
			}
		}
	}

	return utf8Size;
}

char* FormatSpecialChar(char *str)
{
	size_t length = strlen(str);

	for (unsigned int i = 0; i < length; ++i)
	{
		if ((str[i] == '\\') || (str[i] == '\"'))
		{
			for (size_t j = length; j > i; --j)
				str[j] = str[j - 1];

			str[i++] = '\\';

			++length;
		}
	}

	str[length] = '\0';

	return str;
}

wchar_t* FormatSpecialCharUnicode(wchar_t *str)
{
	size_t length = wcslen(str);

	for (unsigned int i = 0; i < length; ++i)
	{
		if ((str[i] == L'\\') || (str[i] == L'\"'))
		{
			for (size_t j = length; j > i; --j)
				str[j] = str[j - 1];

			str[i++] = L'\\';

			++length;
		}
	}

	str[length] = L'\0';

	return str;
}

bool GetHwinfo(HWINFO_SENSORS_SHARED_MEM2 *hwinfo, void **sensors, void **readings)
{
	bool result = false;

	HANDLE mapFile = 0;

	LOG(mapFile = OpenFileMappingA(FILE_MAP_READ, false, "Global\\HWiNFO_SENS_SM2"));

	if (mapFile)
	{
		void *mapAddress = 0;

		LOG(mapAddress = MapViewOfFile(mapFile, FILE_MAP_READ, 0, 0, 0));

		if (mapAddress)
		{
			if (hwinfo)
				memcpy(hwinfo, mapAddress, sizeof(HWINFO_SENSORS_SHARED_MEM2));

			result = true;

			if (sensors)
			{
				LOG(*sensors = malloc(hwinfo->sensorSize * hwinfo->sensorCount));

				if (*sensors)
					memcpy(*sensors, (unsigned char*) mapAddress + hwinfo->sensorOffset, hwinfo->sensorSize * hwinfo->sensorCount);
				else
					result = false;
			}

			if (result)
			{
				if (readings)
				{
					LOG(*readings = malloc(hwinfo->readingSize * hwinfo->readingCount));

					if (*readings)
					{
						memcpy(*readings, (unsigned char*) mapAddress + hwinfo->readingOffset, hwinfo->readingSize * hwinfo->readingCount);
					}
					else
					{
						if (sensors)
							free(*sensors);

						result = false;
					}
				}
			}

			LOG(UnmapViewOfFile(mapAddress));
		}

		LOG(CloseHandle(mapFile));
	}

	return result;
}

void WriteJsonToArduino(wchar_t* json)
{
	char* str = new char[wcslen(json) + 1];
	wcstombs(str, json, MAX_DATA_LENGTH);
	arduino->writeSerialPort(str, MAX_DATA_LENGTH);
}

void ReadArduino()
{
	int readResult = arduino->readSerialPort(incomingData, MAX_DATA_LENGTH);
	printf("%s\n", incomingData);
}

size_t CreateJson(char **jsonData)
{
	size_t utf8Size = 0;

	wchar_t *json = 0;

	LOG(json = (wchar_t*) malloc(1000000 * sizeof(wchar_t)));

	if (json)
	{
		int entryIndex = 0;

		bool first = false;
		bool first_output = true;

		swprintf(json, L"{");

		if (Hwinfo)
		{
			HWINFO_SENSORS_SHARED_MEM2 hwinfo = {0};

			void *sensors = 0;
			void *readings = 0;

			if (GetHwinfo(&hwinfo, &sensors, &readings))
			{
				first_output = false;

				first = true;

				swprintf(json + wcslen(json),
						 L"\"r\":"
						 L"[");

				first = true;


				for (unsigned int i = 0; i < hwinfo.readingCount; ++i)
				{
					HWINFO_SENSORS_READING *reading = (HWINFO_SENSORS_READING*) ((unsigned char*) readings + hwinfo.readingSize * i);

					it = sensorEntries.find(reading->labelOriginal);


					// If reading is in the sensorEntries Map
					if (it != sensorEntries.end())
					{
						sensorVector[it->second] = *reading;
					}

					++entryIndex;
				}

				for (int i = 0; i < sensorVector.size(); i++) {
					HWINFO_SENSORS_READING* reading = &sensorVector[i];

					swprintf(json + wcslen(json),
						L"%hs"
						L"{"
						L"\"a\":\"%hs\","
						L"\"b\":\"%hs\","
						L"\"c\":%d"
						L"}",
						first ? "" : ",",
						FormatSpecialChar(reading->labelUser),
						FormatSpecialChar(reading->unit),
						(int)reading->value);

					first = false;
				}

				swprintf(json + wcslen(json),
						 L""
						 L"]"
						 L"}\n");

				free(sensors);
				free(readings);
			}
		}

		WriteJsonToArduino(json);
		free(json);
	}

	return utf8Size;
}

bool readConfig() {
	bool opened = false;
	bool isPortFoundInConfig = false;
	try {
		string filename = "sensors.txt";
		string delimiter = "=";
		int counter = 0;

		ifstream sensorsFile(filename);
		opened = sensorsFile.good();

		for (string line; getline(sensorsFile, line); )
		{
			string sensorName = line.substr(0, line.find(delimiter));
			string iteratorNumberAsString = line.substr(line.find(delimiter) + 1, line.length());
			if (sensorName == "port")
			{
				portName = portName + iteratorNumberAsString;
				isPortFoundInConfig = true;
			}
			else
			{
				try
				{
					int iteratorNumber = stoi(iteratorNumberAsString);
					sensorEntries.insert(pair<string, int >(sensorName, iteratorNumber));
					counter++;
				}
				catch (std::invalid_argument& e)
				{
					string errorText = "There was an issue parsing the following value as an Int: " + iteratorNumberAsString + "\n";
					printf(errorText.c_str());
					printf("Verify that the names and values follow the requirements for the sensors.txt file.");
					return false;
				}
			}
			
		}

		// Create a vector with the size of the number of elements read from the sensors.txt file.
		HWINFO_SENSORS_READING blank;
		for (int i = 0; i < counter; i++) {
			sensorVector.push_back(blank);
		}

		if (opened) {
			sensorsFile.close();
		}

		if (!isPortFoundInConfig)
		{
			printf("\nThere was no entry in the sensors.txt file in the format of 'port=COMx'. Validate the entry and try again later.\n");
			return false;
		}
	}
	catch (int n) {
		return false;
	}

	return true;
}

void ConnectToArduino()
{
	portNameConstChar = portName.c_str();
	arduino = new SerialPort(portNameConstChar, BaudRate);
}

void CommunicateWithArduino()
{
	// wait connection
	while (!arduino->isConnected()) {
		Sleep(100);
		printf(".");
		ConnectToArduino();
	}

	//Checking if arduino is connected or not
	if (arduino->isConnected()) {
		auto _connectedText = "Connected on port: " + portName;
		printf(_connectedText.c_str());
		printf("\n");
	}

	while (arduino->isConnected())
	{
		char* jsonData = 0;
		CreateJson(&jsonData);
		arduino->readSerialPort(incomingData, MAX_DATA_LENGTH);
		printf("%s", incomingData);

		// 
		Sleep(1000);
	}
}

int main(int argc, char *argv[])
{
	if (!readConfig())
	{
		return EXIT_FAILURE;
	}
	else
	{
		ConnectToArduino();

		while (true)
		{
			CommunicateWithArduino();
		}

		if (LogFile)
			fclose(LogFile);
	}
	

	return EXIT_SUCCESS;
}