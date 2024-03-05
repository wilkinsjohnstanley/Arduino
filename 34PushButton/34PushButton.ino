

//push button stuff
int buttonPin=A0;
int buttonValue;
int dt=100;

void setup() {

pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
Serial.begin(9600);
}

void loop() {
buttonValue=digitalRead(buttonPin);
Serial.print("Your button is: ");
Serial.println(buttonValue);
delay(dt);



}


