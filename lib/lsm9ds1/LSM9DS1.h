/*************************************************************************
	> File Name: LSM9DS1.h
	> Author: gluce
	> Created Time: 2018-03-22 15:28:34
 ************************************************************************/

#ifndef __LSM9DS1_H__
#define __LSM9DS1_H__
typedef struct {
    float yaw;
    float roll;
    float pitch;
} LSM9DS1_DATA; //measured by degrees

//basic functions:

//setup LSM9DS1, if the device is not setup successfully, it will enter forever loop
bool setup_lsm9ds1();

//update the data from LSM9DS1, the function should be called before getting data
void update_lsm9ds1();

//option functions:

//print the yaw, roll and pitch (degrees) from LSM9DS1, need to call update_lsm9ds1 first
void printAttitude();

//get the yaw, roll and pitch (degrees) from LSM9DS1, need to call update_lsm9ds1 first
LSM9DS1_DATA getAttitude();

//get the yaw, roll and pitch (degrees) based on the reference (if set) or initial value, need to call update_lsm9ds1 first
LSM9DS1_DATA getAttitude_offset();

//set the yaw, roll and pitch (degrees) reference
bool setAttitude_ref(LSM9DS1_DATA ref_data);
#endif

