#include "LSM9DS1.h"

void setup() 
{
  Serial.begin(115200);
  setup_lsm9ds1();
  
}

void loop()
{
    LSM9DS1_DATA data = get_lsm9ds1();
    Serial.print(data.yaw);
    Serial.print(" ");
    Serial.print(data.roll); 
    Serial.print(" ");
    Serial.println(data.pitch);
    delay(20);
}

