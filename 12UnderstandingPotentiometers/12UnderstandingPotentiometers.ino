int LED1=13;
int LED2=12;
int LED3=11;
int LED4=10;
//potentiometerstuff
int myVoltPin=A2;
int readVal;
//voltages are in between values, they have decimal places
float V2;
int delayTime=250;
void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
//potentiometerstuff
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
digitalWrite(LED4, HIGH);
//potentiometerstuff
readVal=analogRead(myVoltPin);
//1023 is the maximum number that the Arduino can give you and it says “The pin you're asking about is at, or near, 5V and I can't go higher”.
V2=(5./1023.)*readVal;
Serial.println(V2);
delay(delayTime);
}
