#include <Arduino.h>
#define pot 33


void setup() {
 pinMode(pot,INPUT);
 Serial.begin(115200);
 
}

void loop() {
  int a = analogRead(pot);
  Serial.print("Pot value - " +String(a));
  float voltage = (a/4095.0) * 3.3;
  Serial.print(" || ");
  Serial.println("Volatage - "+ String(voltage));
  delay(1000);
}

