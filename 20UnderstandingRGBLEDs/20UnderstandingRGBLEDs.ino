int redPin=11;
int greenPin=10;
int bluePin=9;
String blue="blue";
String red="red";
String green="green";
String myColor;
String msg="What Color Do You Want?: ";
void setup() {
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
Serial.println(msg);
while(Serial.available()==0){
  //do zip
}
myColor=Serial.readString();

if (myColor==red){
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
}
if (myColor==blue){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin,LOW);
}
if (myColor==green){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);

} if(myColor=="off"){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin,LOW);
}

}
