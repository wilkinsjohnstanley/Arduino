int myNumber;
int LED1=11;
int LED2=10;
int LED3=9;
int LED4=6;
int LED5=5;
String msg="How many blinks do you want?: ";

void setup() {
//If we're gonna use Serial port we need to set it up like this:
Serial.begin(9600);

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
}

void loop() {
  // Ask
  Serial.println(msg);
  // Wait
  while(Serial.available()==0){
    //Nothing Here. Just wait. Then drop out of while loop
  }
  // Read
  myNumber=Serial.parseInt();
  for (int i = 1; i<=myNumber;i++){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    delay(500);

  }

}
