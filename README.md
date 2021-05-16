# GPU_Monitor_Display

This is a project covering the hardware and software needed to have a color display in your desktop that provides GPU Stats like Temperature, Clock Speed, Load, etc.

**YouTube Video:**

[![Video](https://img.youtube.com/vi/c35jJTC9yYk/0.jpg)](https://www.youtube.com/watch?v=c35jJTC9yYk)

## Hardware:
* TTGO TDisplay (Arduino-based Microcontroller)
  * [Example Link](https://www.aliexpress.com/item/4000059428373.html?spm=a2g0s.9042311.0.0.493c4c4dIXBpsw)
* USB C cable
* 3D Printed Case for the TTGO TDisplay
  * I modified [this model](https://www.thingiverse.com/thing:4501444) and filled in the face buttons

## Software:
* Install Visual Studio Code (VS Code)
* Install the PlatformIO Extension in VS Code
* Install [HWInfo v6.4.2](https://www.fosshub.com/HWiNFO-old.html?dwl=hwi_642.exe)
* Download and install the [CP210x USB to UART Driver](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers)
* Open the project in VS Code and Build the project.
* Navigate to the TFT_eSPI Library folder in your Project directory
  * Example: \GPU_Monitor_Display\.pio\libdeps\esp32dev\TFT_eSPI
* Make the following changes to the User_Setup_Select.h file in the TFT_eSPI_restOfFolderName folder:
  * Comment out "#include <User_Setup.h>"
  * Uncomment "#include <User_Setups/Setup25_TTGO_T_Display.h>"
  * Save Settings

## Setup:
* Modify the Sensors.txt file located in GPU_Monitor_Display/remotehwinfo-custom/x64/Release/
  * Modify the COM port to the value of your Arduino (default value is COM9 as that's what I had)
* Run remotehwinfo.exe application located in GPU_Monitor_Display/remotehwinfo-custom/x64/Release/
  * Sensors.txt needs to be in the same directory
