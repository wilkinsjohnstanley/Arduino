
int buzzAlpin=11;
void setup() {
pinMode(buzzAlpin, OUTPUT);
}

void loop() {
tone(buzzAlpin, 293); //D
delay(250);
noTone(buzzAlpin); //off
delay(300);
tone(buzzAlpin, 293); //D
delay(250);
noTone(buzzAlpin); //off
delay(300);
tone(buzzAlpin, 293); //D
delay(250);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 400); //A
delay(900);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 587); //High D
delay(900);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 523); //C
delay(250);


tone(buzzAlpin, 494); //B
delay(250);


tone(buzzAlpin, 440); //A
delay(250);

tone(buzzAlpin, 784); //High G
delay(800);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 587); //High D
delay(800);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 523); //C
delay(250);


tone(buzzAlpin, 494); //B
delay(250);


tone(buzzAlpin, 440); //A
delay(250);

tone(buzzAlpin, 784); //High A
delay(800);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 587); //High D
delay(800);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 523); //C
delay(100);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 494); //B
delay(100);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 523); //C
delay(100);
noTone(buzzAlpin); //off
delay(300);

tone(buzzAlpin, 440); //A
delay(900);
noTone(buzzAlpin); //off
delay(300);














}






















