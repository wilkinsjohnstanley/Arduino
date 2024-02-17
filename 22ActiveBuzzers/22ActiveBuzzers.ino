int myNum;
int buzzAlpen=11;
String answer;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzAlpen, OUTPUT);
Serial.begin(9600);
Serial.println("****************************");
Serial.println("Welcome to the hearing test!");
Serial.println("If you can hear the beeping, press y\nIf not, press n");
}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()==0){
digitalWrite(buzzAlpen, HIGH);
delay(100);
digitalWrite(buzzAlpen, LOW);
delay(5000);
}
answer=Serial.readString();
if(answer=="y"){
  digitalWrite(buzzAlpen, LOW);
  Serial.println("Your hearing is fine!");
} else{
  Serial.println("Uh oh.");
  digitalWrite(buzzAlpen, HIGH);
  delay(5000);
}


}
