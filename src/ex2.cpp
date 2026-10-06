#include "Arduino.h"

#define LIGHT_PIN 33

void setup(void) 
{
    Serial.begin(115200);
}

void loop(void) 
{   
    int minVal = 4095;
    int maxVal = 0;
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
        int val = analogRead(LIGHT_PIN);
        if (val < minVal) minVal = val;
        if (val > maxVal) maxVal = val;
        sum += val;
    }
    
    int avg = sum / 10;
    Serial.print("min=");
    Serial.print(minVal);
    Serial.print(" max=");
    Serial.print(maxVal);
    Serial.print(" avg=");
    Serial.println(avg);
    
    delay(1000);
}