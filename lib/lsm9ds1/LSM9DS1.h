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
} LSM9DS1_DATA;

//setup LSM9DS1, if the device is not setup successfully, it will enter forever loop
bool setup_lsm9ds1();

//update the data from LSM9DS1, the function should be called before printing data
void update_lsm9ds1();

//print the yaw, roll and pitch from LSM9DS1, need to call update_lsm9ds1 first
void printAttitude();

//get the yaw, roll and pitch from LSM9DS1
LSM9DS1_DATA getAttitude();

#endif

