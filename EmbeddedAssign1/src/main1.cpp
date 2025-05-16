#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(15, HIGH);
  delay(500);
  digitalWrite(15, LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(18, HIGH);
  delay(500);
  digitalWrite(18, LOW);
  digitalWrite(19, HIGH);
  delay(500);
  digitalWrite(19, LOW);
  delay(500);
  // put your main code here, to run repeatedly:
}
// put function definitions here: