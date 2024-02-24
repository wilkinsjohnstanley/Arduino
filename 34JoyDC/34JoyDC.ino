
int i=0;
int speedPin=5;
int direction1=4;
int direction2=3;
//completely off is 0, on is 100, completely on is 255
int mSpeed=250;

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

  pinMode(speedPin,OUTPUT);
  pinMode(direction1,OUTPUT);
  pinMode(direction2,OUTPUT);

Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
}

void loop() {
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Zval=digitalRead(Zpin);
//delay(200);



//THIS ONE WORKS
if(Yval>=510) {
  digitalWrite(direction1,LOW); 
  digitalWrite(direction2,HIGH);
  mSpeed=(255./512.)*Yval-255.;
  analogWrite(speedPin, mSpeed); //enable off
}
if(Yval<=510) {
  digitalWrite(direction1,HIGH); 
  digitalWrite(direction2,LOW);
  mSpeed=(-255./510.)*Yval+255;
  analogWrite(speedPin, mSpeed); //enable off
}
// if(Yval==0){
//   digitalWrite(direction1,HIGH); 
//   digitalWrite(direction2,LOW);

//   analogWrite(speedPin, mSpeed); //enable off  
// }



Serial.print(Xval);
Serial.print(',');
Serial.print(Yval);
Serial.print(',');
Serial.println(Zval);

//delay(1000);
}














