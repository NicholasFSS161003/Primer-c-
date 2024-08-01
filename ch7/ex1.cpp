#include <Servo.h>
Servo Servo;

void setup() {
Serial.begin(9600);
Servo.write(0);
Servo.attach(A1);
pinMode(2,INPUT);
pinMode(8,INPUT);
pinMode(A1,INPUT);
digitalWrite(2,HIGH);
digitalWrite(8,HIGH);
analogWrite(A1,HIGH);
}

void loop() {
if(digitalRead(8)==0){
Servo.write(160);
}
if(digitalRead(2)==1){
Servo.write(0);
}
}
