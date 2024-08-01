#include <Servo.h>
Servo Servo;

void setup() {
servo.attach(A0);
pinMode(2,INPUT);
pinMode(8,INPUT);
pinMode(A0,INPUT);
digitalWrite(2,HIGH);
digitalWrite(8,HIGH);
analogWrite(A0,HIGH);
}

void loop() {
if(digitalRead(8)==0){
Servo.write(180);
}
if(digitalRead(2)==1){
Servo.write(0);
}
}

