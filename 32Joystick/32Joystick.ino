int Xpin=A0;
int Ypin=A1;;
//switch pin
int Spin=2;
//read values
int Xval;
int Yval;
//switch value
int Sval;
void setup() {
Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
pinMode(Spin, INPUT);

digitalWrite(Spin, HIGH);
}

void loop() {
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Sval=digitalRead(Spin);
delay(200);

Serial.print("X value is ");
Serial.println(Xval);
Serial.print("Y value is ");
Serial.println(Yval);
Serial.print("Switch value is ");
Serial.println(Sval);
delay(1000);
}
