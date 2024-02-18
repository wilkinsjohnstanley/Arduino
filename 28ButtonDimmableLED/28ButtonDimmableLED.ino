//RGB
int LED = A5;
//state
int LEDState=0;
int buttonNew;
int buttonOld=0;
//button 
int buttonRead;
int buttonRead2;
int buttonPin=A0;
int buttonPin2=A2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED, OUTPUT);
pinMode(buttonPin,INPUT);
pinMode(buttonPin2, INPUT);
}
void loop() {
//if you press the button, button new stores the value 1
buttonRead=digitalRead(buttonPin);
buttonRead2=digitalRead(buttonPin2);
Serial.print("Button 1 = ");
Serial.print(buttonRead);
Serial.print(", ");


Serial.print(" Button 2 = ");
Serial.println(buttonRead2);
delay(1000);

//THE DEFAULT IS OFF
//buttonOld is 0 from the beginning, buttonNew is now 1 because you pressed the button
//both of these are true at the start
//The default is that this is false, and becomes true if you press the button.
//Press the button and state becomes equal to one.
//Press again, and state becomess the default and you are thrown back to beginning of the decision loop.
if(buttonOld==0 && buttonNew == 1){
  //LEDState is 0 from the beginning
  //IF DEFAULT VALUE AND PRESS BUTTON
  if(LEDState==0){
    //the button is turned on
      digitalWrite(LED, HIGH);
    //LED state is set to 1
    LEDState=1; 
    //IF PRESS AGAIN RETURN TO DEFAULT
    //else statement only happens if you enter the if statement in the first place
  } else {
    digitalWrite(LED, LOW);
    LEDState=0;
  }
} 
  buttonOld=buttonNew;
}






