int LED1=13;
int LED2=12;
int LED3=11;
int LED4=10;
int LED5=9;
//potentiometerstuff
int myVoltPin=A2;
int readVal;
//voltages are in between values, they have decimal places
float V2;


void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
//potentiometerstuff
Serial.begin(9600);


}

void loop() {
//potentiometerstuff

//1023 is the maximum number that the Arduino can give you and it says “The pin you're asking about is at, or near, 5V and I can't go higher”.
readVal=analogRead(myVoltPin);
V2=(5./1023.)*readVal;


if(V2>1){
digitalWrite(LED1, HIGH);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
digitalWrite(LED4, LOW);
digitalWrite(LED5, LOW);
}
if(V2>2){
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, LOW);
digitalWrite(LED4, LOW);
digitalWrite(LED5, LOW);
}
if(V2>3){
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
digitalWrite(LED4, LOW);
digitalWrite(LED5, LOW);

}
if(V2>4){
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
digitalWrite(LED4, HIGH);
digitalWrite(LED5, LOW);

}
if(V2==5){
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
digitalWrite(LED4, HIGH);
digitalWrite(LED5, HIGH);

} if(V2==0){
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
digitalWrite(LED4, LOW);
digitalWrite(LED5, LOW);
}



}
