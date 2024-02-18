//RGB
int Blue=A3;
int Green=A4;
int Red=A5;
//state
int LEDState=0;
int buttonNew;
int buttonOld=0;
//deep state
int deepState=0;



//button 
int buttonRead;
int buttonPin=A0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Blue, OUTPUT);
pinMode(Green, OUTPUT);
pinMode(Red, OUTPUT);
pinMode(buttonPin,INPUT);

}




void loop() {
//if you press the button, button new stores the value 1
buttonNew=digitalRead(buttonPin);
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

      digitalWrite(Green, HIGH);

    //LED state is set to 1
    LEDState=1; 

    //IF PRESS AGAIN RETURN TO DEFAULT
    //else statement only happens if you enter the if statement in the first place
  } else {
    digitalWrite(Green, LOW);
    LEDState=0;


  }


} 

  buttonOld=buttonNew;

}






