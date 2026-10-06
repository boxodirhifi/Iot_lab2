#include "Arduino.h"

#define BUTTON_PIN   25
#define RED_LED_PIN    26
#define GREEN_LED_PIN  27
#define YELLOW_LED_PIN 12
#define BLUE_LED_PIN   14

int pressCount = 0;
bool lastButtonState = LOW;  // idle state is LOW with this wiring
/****************************************************/
void setup(void) 
{
    Serial.begin(115200);
    pinMode(BUTTON_PIN, INPUT);  // No pullup - external pulldown via R5
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(YELLOW_LED_PIN, OUTPUT);
    pinMode(BLUE_LED_PIN, OUTPUT);
    
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(BLUE_LED_PIN, LOW);
}
/****************************************************/
void loop(void) {
    bool currentButtonState = digitalRead(BUTTON_PIN);
    
    if (lastButtonState == LOW && currentButtonState == HIGH) {
        pressCount = (pressCount + 1) % 5;
        Serial.print("count=");
        Serial.println(pressCount);
        
        digitalWrite(RED_LED_PIN,    (pressCount >= 1) ? HIGH : LOW);
        digitalWrite(GREEN_LED_PIN,  (pressCount >= 2) ? HIGH : LOW);
        digitalWrite(YELLOW_LED_PIN, (pressCount >= 3) ? HIGH : LOW);
        digitalWrite(BLUE_LED_PIN,   (pressCount >= 4) ? HIGH : LOW);
        
        delay(200);  // Longer debounce for mechanical button
    }
    
    lastButtonState = currentButtonState;
}