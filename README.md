# lsm9ds1_platformio

***Description***

lsm9ds1 library used in platformio, the library is highly inspired by Adafruit_LSM9DS1 library

It has been tested on Sparkfun LSM9DS1 and Adafruit LSM9DS1 connecting to ESP8266 via I2C

The default MCU platform is Adafruit ESP8266 and Arduino Pro, you could config to your chip in platformio.ini

***USAGE***

You can use:

make (all): to compile the firmware

make upload: to upload to your device

make clean: clean the project

make update: to update all the libraries

***API function***

//setup LSM9DS1, if the device is not setup successfully, it will enter forever loop 
bool setup_lsm9ds1();

//option functions:

//print the yaw, roll and pitch (degrees) from LSM9DS1 
void print_lsm9ds1();

//get the yaw, roll and pitch (degrees) from LSM9DS1 
LSM9DS1_DATA get_lsm9ds1();

//get the yaw, roll and pitch (degrees) based on the reference (if set) or initial value 
LSM9DS1_DATA get_lsm9ds1_offset();

//set the yaw, roll and pitch (degrees) reference 
bool set_lsm9ds1_ref(LSM9DS1_DATA ref_data);

typedef struct { 
	float yaw; 
	float roll; 
	float pitch; 
} LSM9DS1_DATA; //measured by degrees

***LICENSE***

MIT
