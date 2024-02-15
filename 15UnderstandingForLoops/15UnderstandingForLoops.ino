int LED1=11;
int LED2=10;
int LED3=9;
int LED4=6;
int LED5=5;
int blink=(250);

//potentiometerstuff
int potPin=A2;
int potVal;
//voltages are in between values, they have decimal places
float LEDBrightness;
void setup() {
pinMode(potPin, INPUT);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
Serial.begin(9600);
}

void loop() {
for(int i = 1; i<9;i++){
  if (i<4){
    digitalWrite(LED1, HIGH);
    delay(blink);
    digitalWrite(LED1, LOW);
    delay(blink);
  }
  else{
    digitalWrite(LED5, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(blink);
    digitalWrite(LED5, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(blink);
  }
}


potVal=analogRead(potPin);
LEDBrightness=(255./1023.)*potVal;
analogWrite(LED1, LEDBrightness);
analogWrite(LED2, LEDBrightness);
analogWrite(LED3, LEDBrightness);
analogWrite(LED4, LEDBrightness);
analogWrite(LED5, LEDBrightness);

Serial.println(LEDBrightness);
}
