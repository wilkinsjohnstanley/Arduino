//#include <Servo.h>

//int servoPin=A5;
//int servoPos;
//Servo myServo;

int Xpin=A0;
int Ypin=A1;;
//switch pin
int Zpin=2;
//read values
int Xval;
int Yval;
//switch value
int Zval;
void setup() {
//myServo.attach(servoPin);
//pinMode(servoPin, OUTPUT);
Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
pinMode(Zpin, INPUT);

digitalWrite(Zpin, HIGH);
}

void loop() {
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Zval=digitalRead(Zpin);
//delay(200);

if(Xval>800){
//  servoPos=180;
//myServo.write(servoPos);

}
if(Xval<500){
//  servoPos=-180;
//myServo.write(servoPos);
}


Serial.print(Xval);
Serial.print(',');
Serial.print(Yval);
Serial.print(',');
Serial.println(Zval);

//delay(1000);
}














