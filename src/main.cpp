#include <Arduino.h>
#define onboard 13

//int myFunction(int, int);

void setup() {
  pinMode(onboard,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(onboard,LOW);
  delay(1000);
  digitalWrite(onboard,HIGH);
  delay(1000);
  Serial.println("Looping");
}

//int myFunction(int x, int y) {
//  return x + y;
//}