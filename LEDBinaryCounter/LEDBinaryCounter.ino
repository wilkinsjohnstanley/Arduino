int eight = 13;
int four = 11;
int two = 9;
int one = 6;
void setup() {
  
  pinMode(eight, OUTPUT);
  pinMode(four, OUTPUT);
  pinMode(two, OUTPUT);
  pinMode(one, OUTPUT);

}

void loop() {
//1
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);
       delay(250);
//2
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, HIGH);
       digitalWrite(one, LOW);
       delay(250);
//3
       digitalWrite(eight, LOW);
       digitalWrite(four, LOW);
       digitalWrite(two, HIGH);
       digitalWrite(one, HIGH);
       delay(250);
//4
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, LOW);
       digitalWrite(one, LOW);
       delay(250);
//5
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);
       delay(250);
//6
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, HIGH);
       digitalWrite(one, LOW);
       delay(250);
//7
       digitalWrite(eight, LOW);
       digitalWrite(four, HIGH);
       digitalWrite(two, HIGH);
       digitalWrite(one, HIGH);
       delay(250);
//8
       digitalWrite(eight, HIGH);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, LOW);
       delay(250);
//9
       digitalWrite(eight, HIGH);
       digitalWrite(four, LOW);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);
       delay(250);
//10
       digitalWrite(eight, HIGH);
       digitalWrite(four, LOW);
       digitalWrite(two, HIGH);
       digitalWrite(one, LOW);
       delay(250);
//11
       digitalWrite(eight, HIGH);
       digitalWrite(four, LOW);
       digitalWrite(two, HIGH);
       digitalWrite(one, HIGH);
       delay(250);
//12
       digitalWrite(eight, HIGH);
       digitalWrite(four, HIGH);
       digitalWrite(two, LOW);
       digitalWrite(one, LOW);
       delay(250);
//13
       digitalWrite(eight, HIGH);
       digitalWrite(four, HIGH);
       digitalWrite(two, LOW);
       digitalWrite(one, HIGH);
       delay(250);
//14
       digitalWrite(eight, HIGH);
       digitalWrite(four, HIGH);
       digitalWrite(two, HIGH);
       digitalWrite(one, LOW);
       delay(250);
//15
       digitalWrite(eight, HIGH);
       digitalWrite(four, HIGH);
       digitalWrite(two, HIGH);
       digitalWrite(one, HIGH);
       delay(3000);


}
