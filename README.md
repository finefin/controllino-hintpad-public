# controllino-serial
general Controllino MINI/MAXI/MEGA sketch for Hintpad!-input/output via serial com port

## Setup
- Install Arduino IDE https://www.arduino.cc/en/main/software 
- or Atom with PlatformIO plugin http://docs.platformio.org/en/latest/ide/atom.html
- follow the steps to install the Controllino library and hardware definitions https://github.com/CONTROLLINO-PLC/CONTROLLINO_Library#installation-guide
- connect Controllino and set up board type and serial port in Board Manager
- open controllino-serial sketch
- set up Controllino model in Sketch (1 = MINI, 2 = MAXI, 3 = MEGA) - example: #define CMODL 2
- compile and upload
