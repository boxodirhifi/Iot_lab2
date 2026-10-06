#include "Arduino.h"

#define LIGHT_PIN 33

bool alertActive = false;
/****************************************************/
void setup(void) 
{
    Serial.begin(115200);
}


/****************************************************/
void loop(void) {
    int val = analogRead(LIGHT_PIN);
    
    if (val > 3000 && !alertActive) {
        alertActive = true;
        Serial.println("ALERT=1");
    }
    else if (val < 2500 && alertActive) {
        alertActive = false;
        Serial.println("ALERT=0");
    }
    
    delay(300);
}
