String myName;
String msg="What is your name? ";
String msg2="Hello ";
String msg3=", Welcome to Arduino!";
void setup() {
Serial.begin(9600);

}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
  //do nothing; just wait
}
myName=Serial.readString();
Serial.print(msg2);
Serial.print(myName);
Serial.print(msg3);

}
