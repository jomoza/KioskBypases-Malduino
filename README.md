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

## Android Kiosk

//TODO

## Linux Kiosk

//TODO

## Other

//TODO

## Project & references

//TODO Members, links,...
