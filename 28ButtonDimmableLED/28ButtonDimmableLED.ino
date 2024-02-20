int buttonPin1=A0;
int buttonPin2=A2;
int buttonVal1;
int buttonVal2;
int LEDPin=3;
int LEDbright=0;

void setup(){
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(LEDPin, OUTPUT);
Serial.begin(9600);
}
void loop(){
buttonVal1=digitalRead(buttonPin1);
buttonVal2=digitalRead(buttonPin2);
Serial.print("Button 1 = ");
Serial.print(buttonVal1);
Serial.print(", ");
Serial.print("Button 2 = ");
Serial.println(buttonVal2);
delay(250);
if (buttonVal1==1){
  LEDbright=LEDbright+50;
}
if(buttonVal2==1){
  LEDbright=LEDbright-50;
}
if(LEDbright>255){
  LEDbright=255;
}
if(LEDbright<0){
  LEDbright=0;
}
analogWrite(LEDPin, LEDbright);



}