//This is included in the original Aruino download
#include <LiquidCrystal.h>
#include <IRremote.h>
//Remote
int IRpin=5;
IRrecv IR(IRpin);
decode_results cmd;
//LCD
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

int firstNum;
int secondNum;
int answer;
String op;

//create an LCD object
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
//remote
IR.enableIRIn();
  //our LCD has 16 columns and 2 rows!
lcd.begin(16, 2);
//Serial monitor is used for debugging. Checking that the variables get assigned as expected and what they were at any given moment
Serial.begin(9600);
}

void loop() {
//first
while(IR.decode(&cmd)==0){

  }
  if(cmd.value==16738455){
    lcd.print(0);
    Serial.println(0);
    firstNum=0;   
    delay(1000);
    IR.resume();

  }


  if(cmd.value==16724175){
    lcd.print(1);
    firstNum=1;  
    Serial.println(firstNum);
    delay(1000);
    IR.resume();  

  }
  if(cmd.value==16718055){
    lcd.print(2);
    Serial.println(2);
    firstNum=2;
    delay(1000);
    IR.resume();

  }
  if(cmd.value==16743045){
    lcd.print(3);
    Serial.println(3);
    firstNum=3;
    delay(1000);
    IR.resume();

  }
  if(cmd.value==16716015){
    lcd.print(4);
    Serial.println(4);
    firstNum=4;
    delay(1000);
    IR.resume();

  }

  if(cmd.value==16726215){
    lcd.print(5);
    Serial.println(5);
    firstNum=5;
    delay(1000);
    IR.resume();

  }

  if(cmd.value==16734885){
    lcd.print(6);
    Serial.println(6);
    firstNum=6;
    delay(1000);
    IR.resume();

  }

//get operator

while(IR.decode(&cmd)==0){

}
            if(cmd.value==16748655){
            lcd.print("+");
            Serial.println("+");
            op="plus";
            Serial.println(cmd.value);
            delay(1000);
            IR.resume();
  }
          if(cmd.value==16769055){
            lcd.print("-");
            Serial.println("-");
            op="minus";
            Serial.println(cmd.value);
            delay(1000);
            IR.resume();
  }
          if(cmd.value==16761405){
            lcd.print("x");
            Serial.println("x");
            op="times";
            Serial.println(cmd.value);
            delay(1000);
            IR.resume();
  }
          if(cmd.value==16720605){
            lcd.print("/");
            Serial.println("/");
            op="divided by";
            Serial.println(cmd.value);
            delay(1000);
            IR.resume();
  }

//second number
while(IR.decode(&cmd)==0){

  }
  if(cmd.value==16738455){
    lcd.print(0);
    Serial.println(0);
    secondNum=0;   
    delay(1000);
    IR.resume();
  }

  if(cmd.value==16724175){
    lcd.print(1);
    Serial.println(1);
    secondNum=1;    
    delay(1000);
    IR.resume();
  }
  if(cmd.value==16718055){
    lcd.print(2);
    Serial.println(2);
    secondNum=2;
    delay(1000);
    IR.resume();
  }
  if(cmd.value==16743045){
    lcd.print(3);
    Serial.println(3);
    secondNum=3;
    delay(1000);
    IR.resume();
  }
  if(cmd.value==16716015){
    lcd.print(4);
    Serial.println(4);
    secondNum=4;
    delay(1000);
    IR.resume();
  }

  if(cmd.value==16726215){
    lcd.print(5);
    Serial.println(5);
    secondNum=5;
    delay(1000);
    IR.resume();
  }

  if(cmd.value==16734885){
    lcd.print(6);
    Serial.println(6);
    secondNum=6;
    delay(1000);
    IR.resume();
  }
while(IR.decode(&cmd)==0){

  }
//calculate
    if(cmd.value==16750695 && op=="plus"){
    lcd.print("=");
    Serial.println(firstNum);
    Serial.println(secondNum);
    Serial.println(op);
    answer=firstNum+secondNum;
    Serial.println(answer);
    lcd.print(answer);
    }
    if(cmd.value==16750695 && op=="minus"){
    lcd.print("=");
    answer=firstNum-secondNum;
    Serial.println(firstNum);
    Serial.println(secondNum);
    Serial.println(op);
    Serial.println(answer);
    lcd.print(answer);
    }
    if(cmd.value==16750695 && op=="times"){
    lcd.print("=");
    answer=firstNum*secondNum;
    Serial.println(firstNum);
    Serial.println(secondNum);
    Serial.println(op);
    Serial.println(answer);
    lcd.print(answer);
    }
    if(cmd.value==16750695 && op=="divided by"){
    lcd.print("=");
    answer=firstNum/secondNum;
    Serial.println(firstNum);
    Serial.println(secondNum);
    Serial.println(op);
    Serial.println(answer);
    lcd.print(answer);
    }
while(IR.decode(&cmd)==0){

  }

  if(cmd.value==16756815){
    lcd.print("Cleared");
    firstNum=0;
    secondNum=0;
    answer=0;
    delay(1000);
    lcd.clear();
    delay(1000);
    IR.resume();
  }



IR.resume();




  
  

}
