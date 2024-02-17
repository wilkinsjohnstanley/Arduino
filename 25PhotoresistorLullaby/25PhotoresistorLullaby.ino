int lightPen=A0;
int lightVal;
int buzzAlpin=A5;

void setup() {
pinMode(lightPen,INPUT);
Serial.begin(9600);

pinMode(buzzAlpin, OUTPUT);
}

void loop() {
lightVal=analogRead(lightPen);
Serial.println(lightVal);
delay(250);


if (lightVal<350){
//Go to sleep little baby
tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);
tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);

tone(buzzAlpin, 523); //C
delay(500);
noTone(buzzAlpin); //off
delay(100);

tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);
tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);

tone(buzzAlpin, 523); //C
delay(500);
noTone(buzzAlpin); //off
delay(100);


//A
tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);
//C
tone(buzzAlpin, 523); //C
delay(250);
noTone(buzzAlpin); //off
delay(100);
//F
tone(buzzAlpin, 698); //F
delay(500);
noTone(buzzAlpin); //off
delay(100);
//E
tone(buzzAlpin, 659); //E
delay(500);
noTone(buzzAlpin); //off
delay(100);
//D
tone(buzzAlpin, 587); //High D
delay(250);
noTone(buzzAlpin); //off
delay(100);
//D
tone(buzzAlpin, 587); //High D
delay(250);
noTone(buzzAlpin); //off
delay(100);

//C
tone(buzzAlpin, 523); //C
delay(500);
noTone(buzzAlpin); //off
delay(250);

//G
tone(buzzAlpin, 392); //low G
delay(250);
noTone(buzzAlpin); //off
delay(100);
//A
tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);

//A#
tone(buzzAlpin, 466); //A
delay(500);
noTone(buzzAlpin); //off
delay(100);

//G
tone(buzzAlpin, 392); //low G
delay(250);
noTone(buzzAlpin); //off
delay(100);

//G
tone(buzzAlpin, 392); //low G
delay(250);
noTone(buzzAlpin); //off
delay(100);
//A
tone(buzzAlpin, 440); //A
delay(250);
noTone(buzzAlpin); //off
delay(100);

//A#
tone(buzzAlpin, 466);
delay(500);
noTone(buzzAlpin); //off
delay(100);

//G
tone(buzzAlpin, 392); //low G
delay(250);
noTone(buzzAlpin); //off
delay(100);

//A#
tone(buzzAlpin, 466); 
delay(250);
noTone(buzzAlpin); //off
delay(100);

//E
tone(buzzAlpin, 659); //E
delay(250);
noTone(buzzAlpin); //off
delay(100);

//D
tone(buzzAlpin, 587); //High D
delay(250);
noTone(buzzAlpin); //off
delay(100);
//C
tone(buzzAlpin, 523); //C
delay(250);
noTone(buzzAlpin); //off
delay(100);

//E
tone(buzzAlpin, 659); //E
delay(250);
noTone(buzzAlpin); //off
delay(100);
//F
tone(buzzAlpin, 698); //F
delay(800);
noTone(buzzAlpin); //off
delay(300);

} 


}
