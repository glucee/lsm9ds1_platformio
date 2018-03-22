#include "LSM9DS1.h"

void setup() 
{
  Serial.begin(115200);
  setup_lsm9ds1();
  
}

void loop()
{
    update_lsm9ds1();
    printAttitude();
    delay(20);
}

