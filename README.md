# GPU_Monitor_Display

## Hardware:
* TTGO TDisplay (Arduino-based Microcontroller)
  * [Example Link](https://www.aliexpress.com/item/4000059428373.html?spm=a2g0s.9042311.0.0.493c4c4dIXBpsw)
* USB C cable
* 3D Printed Case for the TTGO TDisplay
  * I modified [this model](https://www.thingiverse.com/thing:4501444) and filled in the face buttons
* Optional Materials for a cleaner hardwired look
  * USB Cable
  * Wire Strippers
  * Soldering Iron and Solder
  * Side Snips

## Software:
* Install VS Code
* Install PlatformIO
* Install [HWInfo](https://www.hwinfo.com/download/)
* Download and Run [RemoteHWInfo](https://github.com/Demion/remotehwinfo) 
* Download Library "TFT_eSPI"
* Navigate to the TFT_eSPI Library folder in your users directory
  * In Windows, this would be C:\Users\YOUR_USERNAME\\.platformio\lib\TFT_eSPI_restOfFolderName

## Getting the customized URL from RemoteHWInfo
* Get the IP of your Desktop
* Run HWInfo
* Run RemoteHWInfo
* Open up http://YOUR_DESKTOP_IP:60000/json.json
* For each of the following items, note the corresponding "entryIndex" values:
  * GPU Temperature
  * GPU Clock
  * GPU Core Load
* Add in the noted "entryIndex" values in a comma separated format in the below URL template:
  * http://YOUR_DESKTOP_IP:60000/json.json?enable=value1,value2,value3
    * Random Example: "http://10.10.183.64:60000/json.json?enable=176,180,183"
* Navigate to your custom URL and verify that the only entries that appear are for the 3 items you provided.

## Modify config.h
* Replace the "WIFI_SSID_HERE" and "WIFI_PW_HERE" values with your connection info
* Replace the "IP_PLUS_PORT_PLUS_IDS" value with your custom URL from the **Getting the customized URL from RemoteHWInfo** step
