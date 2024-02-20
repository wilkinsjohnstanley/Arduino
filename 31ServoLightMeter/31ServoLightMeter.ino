#include <Servo.h>

int servoPin=8;
int servoPos;
Servo myServo;

int lightPen=A0;
int lightVal;

void setup() {
pinMode(lightPen,INPUT);
pinMode(servoPin, OUTPUT);
myServo.attach(servoPin);
Serial.begin(9600);
}

void loop() {
lightVal=analogRead(lightPen);
Serial.println(lightVal);
delay(250);

if(lightVal>700){
  servoPos=180;
myServo.write(servoPos);
}
if(lightVal<700){
  servoPos=0;
myServo.write(servoPos);
}

}
