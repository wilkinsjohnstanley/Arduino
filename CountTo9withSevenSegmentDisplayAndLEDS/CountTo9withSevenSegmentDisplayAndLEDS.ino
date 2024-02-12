//LEDs
int eight = 13;
int four = 12;
int two = 11;
int one = 10;
//7-Segment LED Display (single digit)
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;


void setup() {
  //LEDs
  pinMode(eight, OUTPUT);
  pinMode(four, OUTPUT);
  pinMode(two, OUTPUT);
  pinMode(one, OUTPUT);
//7-Segment LED Display(single digit)
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
}

void loop() {

//0
  //LEDs
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, LOW);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, LOW);
             delay(500);

//1
  //LEDs
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
             delay(500);

//2
  //LEDS
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, HIGH);
       digitalWrite(one, LOW);
 
  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
       delay(500);

//3
  //LEDS
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, HIGH);
       digitalWrite(one, HIGH);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
       delay(500);


//4
  //LEDs
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, LOW);
       digitalWrite(one, LOW);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
       delay(500);

//5
  //LEDs
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
       delay(500);

//6
  //LEDs
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, HIGH);
       digitalWrite(one, LOW);
  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
       delay(500);


//7
  //LEDs
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, HIGH);
       digitalWrite(one, HIGH);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
       delay(500);

//8
  //LEDs
       digitalWrite(eight, HIGH);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, LOW);

  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
       delay(500);

//9
  //LEDs
       digitalWrite(eight, HIGH);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);
  //7-Segment LED Display(single digit)
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
       delay(500);


}
