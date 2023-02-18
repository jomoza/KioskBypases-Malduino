# Awesome Kiosk Hacking
Compilation of scripts and resources used for the escape, evasion and bypass of tactile kiosks. There are different cases depending on the specifics of each kiosk device.

## Windows Kiosk

[BadUSB/FlipperZero Big Evasion](https://github.com/nocomp/Kiosk-evasion-BADUsb-Bruteforce)

In this repository you can find the same proof of concept, along with other more reduced ones to integrate it into an Arduino Nano / Leonardo. 
See the files:

- [Malduino_kiosk_scape_big1.ino](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Malduino_kiosk_scape_big1.ino)
- [Malduino_kiosk_scape_med1.ino]() //TODO
- [Malduino_kiosk_scape_min1.ino]() //TODO

### A trusted binary for kiosk configuration on windows

[A nice simple YT video](https://www.youtube.com/watch?v=aBMvFmoMFMI)

##### Simple "Oneliner" (it runs cmd so...)
```
  cmd /c copy "%SYSTEMROOT%\System32\cmd.exe" "%PUBLIC%\msedge.exe"
  cmd /c copy "%SYSTEMROOT%\System32\cmd.exe" "%PUBLIC%\msedge.exe" & ren "%PUBLIC%\msedge.exe" "msedge.exe"
```

This would be the example in the CMD of how the bypass that is explained would be performed. This is to understand the PoC, since, as the CMD is blocked, we will not be able to launch this directly emulating the shortcut Win+R. It is more advisable that the Arduino forces the opening of an explorer window and perform the process manually.

## Android Kiosk

[About emulate android touch w/ Arduino](https://forum.arduino.cc/t/how-to-use-arduino-input-to-emulate-touch-on-android/140732)

#### Using BLE Devices to emulate android thinks

The [**Android_PressOff_BLE.ino**](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Android_PressOff_BLE.ino) file is a test of pressing the off button on an Android device. This uses the external library ["Adafruit BluefruitLE nRF51"](https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le/installing-ble-library), which allows us to send BLE (Bluetooth Low Energy) commands from the Arduino to other Bluetooth enabled devices. This test assumes that the Bluetooth module has already been configured and connected to the Android device.

This code waits for a button connected to pin 7 of the Arduino to be pressed before sending the BLE command that emulates the power off button press on an Android device. Once the command is sent, it waits for the Arduino button to be released before sending the command again.

Note that this is just an example, and that the pin used and the BLE command sent may vary depending on the Android device and Bluetooth module used. Be sure to properly configure the Bluetooth module and connect to the Android device before running the code.

## More

- [Mouse and click on the corners of the screen (Useful)](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Malduino_kiosk_Corner_Clicks.ino)

- [Malduino_touch_kiosk_scape.ino](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Malduino_touch_kiosk_scape.ino) This POC allows the arduino to simulate touching the corners of a touch screen. It can also be useful if using the Mouse.h library does not work. It also uses the [Adafruit_FT6206](https://github.com/adafruit/Adafruit_FT6206_Library) library.

## Project & references

//TODO Members, links,...
### Videos.
