int redLED = 13;
int dit = 250;
int dah = 500;


void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);

}

void loop() {


digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
delay(1000);


digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);
digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);
digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

delay(1000);

}