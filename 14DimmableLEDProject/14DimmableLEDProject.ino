int LED1=11;
int LED2=10;
int LED3=9;
int LED4=6;
int LED5=5;

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
potVal=analogRead(potPin);
LEDBrightness=(255./1023.)*potVal;
analogWrite(LED1, LEDBrightness);
analogWrite(LED2, LEDBrightness);
analogWrite(LED3, LEDBrightness);
analogWrite(LED4, LEDBrightness);
analogWrite(LED5, LEDBrightness);

Serial.println(LEDBrightness);
}
