# KioskBypases Malduino
Compilation of scripts and resources used for the escape, evasion and bypass of tactile kiosks. There are different cases depending on the specifics of each kiosk device.

![](https://external-preview.redd.it/atm-kiosk-hacking-2022-payment-village-v0-yKep09vUlzYnBDacaGGBXYXT-nUA_sCgBQfmlsvRZDw.jpg?width=640&crop=smart&auto=webp&s=4f50d108e6a3ae9d084ba69a05f165bbb64e2849)

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

- More info [here](https://blog.nviso.eu/2022/05/24/breaking-out-of-windows-kiosks-using-only-microsoft-edge/)

## Android Kiosk

[About emulate android touch w/ Arduino](https://forum.arduino.cc/t/how-to-use-arduino-input-to-emulate-touch-on-android/140732)

#### Using BLE Devices to emulate android thinks

The [**Android_PressOff_BLE.ino**](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Android_PressOff_BLE.ino) file is a test of pressing the off button on an Android device. This uses the external library ["Adafruit BluefruitLE nRF51"](https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le/installing-ble-library), which allows us to send BLE (Bluetooth Low Energy) commands from the Arduino to other Bluetooth enabled devices. This test assumes that the Bluetooth module has already been configured and connected to the Android device.

This code waits for a button connected to pin 7 of the Arduino to be pressed before sending the BLE command that emulates the power off button press on an Android device. Once the command is sent, it waits for the Arduino button to be released before sending the command again.

Note that this is just an example, and that the pin used and the BLE command sent may vary depending on the Android device and Bluetooth module used. Be sure to properly configure the Bluetooth module and connect to the Android device before running the code.

## Manual Kiosk Scape
### Tips
- Try to interact with images by holding down until the "Save Image As" option appears. Then, click on the *Help* blue icon at the top right of the Windows File Manager to spawn a browser.

## More

- [Mouse and click on the corners of the screen (Useful)](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Malduino_kiosk_Corner_Clicks.ino)

- [Malduino_touch_kiosk_scape.ino](https://github.com/jomoza/Awesome-Kiosk-Hacking/blob/main/Malduino_touch_kiosk_scape.ino) This POC allows the arduino to simulate touching the corners of a touch screen. It can also be useful if using the Mouse.h library does not work. It also uses the [Adafruit_FT6206](https://github.com/adafruit/Adafruit_FT6206_Library) library.

## Project & references

### Videos.

- [People di thinks wz Flippe Zero](https://www.youtube.com/shorts/fEbEJ2AoIP0)
- [MaaS360 - escape from COSU Kiosk Mode](https://www.youtube.com/watch?v=3cDX-5KTB18)
- [Build a kiosk](https://www.youtube.com/watch?v=hf96SQqOoRs)
- [Old but Gold](https://external-preview.redd.it/6Y_KRDqa1628iIBcnOl3kEg3cekA58CNQLru9HxYwNE.gif?format=mp4&s=5262cebdf02bba73ee1b51108e29ef1dbb9b37ee)


### Links

- [HACKTRICKS "Escaping from gui applications"](https://book.hacktricks.xyz/hardware-physical-access/escaping-from-gui-applications)
- [How to exit android kiosk mode in hexnode mdm](https://www.hexnode.com/mobile-device-management/help/how-to-exit-android-kiosk-mode-in-hexnode-mdm/)
- [kiosk hacking](https://www.kiosksimple.com/blogs/news/kiosk-hacking)
- [kioskindustry - Tips To Harden Your Kiosk Lockdown Browser](https://kioskindustry.org/kiosk-hacking-tips-to-harden-your-kiosk/)
- [Exit browser full screen](https://unix.stackexchange.com/questions/702690/exit-browser-in-full-screen)
- [Exit Friefox Kiosk mode](https://superuser.com/questions/424411/how-to-exit-firefox-kiosk-mode)
- [Kiosk breakout cheatsheet](https://pentestdiary.blogspot.com/2017/12/kiosk-breakout-cheatsheet.html)
- [ATM Kios Hacking](https://boschko.ca/atm-kiosk-hacking-phd2022/)
- [DEFCON 2016 Hacking Internet Kiosk’s](https://media.defcon.org/DEF%20CON%2016/DEF%20CON%2016%20presentations/DEF%20CON%2016%20-%20craig.pdf)
- [ATM Kiosk hacking labs](https://boschko.ca/atm-kiosk-hacking-labs/)
- [Kiosk breakout](https://ppn.snovvcrash.rocks/pentest/infrastructure/kiosk-breakout)
- [x90x90 Kiosk breakout](https://www.x90x90.net/tools/2022/11/02/Kiosk-Breakout.html)
- [iKAT v3.0 - Paul Craig](http://www.ikat.kronicd.net/Windows/)
- [ATM Kiosk hacking phd2022](https://boschko.ca/atm-kiosk-hacking-phd2022/)


- [Exit kiosk mode android](https://help.airdroid.com/hc/en-us/articles/4402066691611--Guide-How-to-exit-the-Kiosk-Mode-)
- [Safe Exam Browser CVE-2022-36220](https://nvd.nist.gov/vuln/detail/CVE-2022-36220)
- [More](https://github.com/SafeExamBrowser/seb-win-refactoring/issues/434)
- [KioWare Server Version 4.9.6 - Weak Folder Permissions Privilege Escalation](https://www.exploit-db.com/exploits/46093)
- [How to configure disable kiosk mode windows 10](https://www.makeuseof.com/how-to-configure-disable-kiosk-mode-windows-10/#:~:text=To%20disable%20kiosk%20mode%2C%20go,on%20the%20Remove%20kiosk%20button.)
- [Linux kiosk military trackball](http://www.maciejkola.pl/linux-kiosk-military-trackball-and-hp-terminal-hacking/)
- [How to exit Kiosck Linux Mode](https://askubuntu.com/questions/884275/how-to-exit-from-kiosk-mode)

- [RFID Kiosks](https://www.atlasrfidstore.com/rfid-kiosks)
