int lightPen=A0;
int lightVal;

void setup() {
pinMode(lightPen,INPUT);
Serial.begin(9600);
}

void loop() {
lightVal=analogRead(lightPen);
Serial.println(lightVal);
delay(250);
}
