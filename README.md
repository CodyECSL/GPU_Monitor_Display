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
* Install VS Code
* Install PlatformIO
* Install [HWInfo](https://www.hwinfo.com/download/)
* Download an install the [CP210x USB to UART Driver](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers)
* In VS Code > PlatformIO, Download Library "TFT_eSPI"
* Navigate to the TFT_eSPI Library folder in your users directory
  * In Windows, this would be C:\Users\YOUR_USERNAME\\.platformio\lib\TFT_eSPI_restOfFolderName
* Make the following changes to the User_Setup_Select.h file in the TFT_eSPI_restOfFolderName folder:
  * Comment out "#include <User_Setup.h>"
  * Uncomment "#include <User_Setups/Setup25_TTGO_T_Display.h>"
  * Save Settings

