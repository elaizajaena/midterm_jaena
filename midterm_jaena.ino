/*======================================================
                     Counter
========================================================
Description:
Using the Ir Sensor to count the objects detected and
display it on a 7 segment.

Designer Engineer:
Ebio, Ann Clarise
Jaena, Elaiza B.

Date:
Oct. 14, 2026
======================================================*/


#include "modes.h"

// GPIOS for Inputs (ESP32 safe input layout)
const byte Ir = 36;       // Input-only pin, ideal for IR Sensor
const byte SW1 = 33; 
const byte SW2 = 27; 

// Variables
int counter = 0;
int inSW1 = 0;
int  inputSW2 = 0;



void setup() {
  // Pin setup
  pinMode(Ir,  inputSW1,  inSW2);
  
  // Initialize 7-segment display pins
  initDisplay();

  Serial.begin(9600);
}


void loop() {
  // 1. Read IR sensor
   inputSW1 = digitalRead(Ir);
  if (input == 0) {
    if (counter < 99) {
      counter++;
    }
    delay(300); // Debounce delay
  }

   inputSW2 = digitalRead(Ir);
  if (input == 0) {
    if (counter < 99) {
      counter++;
    }
    delay(300); // Debounce delay
  }
  // 2. Refresh display output
  displayCounter(counter);
  
  delay(50);
}