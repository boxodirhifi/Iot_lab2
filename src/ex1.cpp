#include "Arduino.h"

#define RED_LED_PIN 26
#define GREEN_LED_PIN 27
#define YELLOW_LED_PIN 12
#define BLUE_LED_PIN 14

/****************************************************/
void setup(void) 
{
    Serial.begin(115200);
    pinMode(RED_LED_PIN, OUTPUT); // RED LED
    pinMode(GREEN_LED_PIN, OUTPUT); // GREEN LED
    pinMode(YELLOW_LED_PIN, OUTPUT); // YELLOW LED
    pinMode(BLUE_LED_PIN, OUTPUT); // BLUE LED
}


/****************************************************/
void loop(void) 
{
    digitalWrite(RED_LED_PIN, HIGH); // Turn RED ON
    Serial.println("chase=RED");
    delay(150); // Wait for 150 ms

    digitalWrite(RED_LED_PIN, LOW); // Turn RED OFF


    digitalWrite(GREEN_LED_PIN, HIGH); // Turn GREEN ON
    Serial.println("chase=GREEN");
    delay(150); // Wait for 150 ms

    digitalWrite(GREEN_LED_PIN, LOW); // Turn GREEN OFF


    digitalWrite(YELLOW_LED_PIN, HIGH); // Turn YELLOW ON
    Serial.println("chase=YELLOW");
    delay(150); // Wait for 150 ms

    digitalWrite(YELLOW_LED_PIN, LOW); // Turn YELLOW OFF


    digitalWrite(BLUE_LED_PIN, HIGH); // Turn BLUE ON
    Serial.println("chase=BLUE");
    delay(150);

    digitalWrite(BLUE_LED_PIN, LOW); // Turn BLUE OFF


    digitalWrite(YELLOW_LED_PIN, HIGH); // Turn YELLOW ON
    Serial.println("chase=YELLOW");
    delay(150); // Wait for 150 ms

    digitalWrite(YELLOW_LED_PIN, LOW); // Turn YELLOW OFF


    digitalWrite(GREEN_LED_PIN, HIGH); // Turn GREEN ON
    Serial.println("chase=GREEN");
    delay(150); // Wait for 150 ms

    digitalWrite(GREEN_LED_PIN, LOW); // Turn GREEN OFF
}
