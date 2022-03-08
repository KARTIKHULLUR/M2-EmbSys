#include<LiquidCrystal.h>
//#define motion 12
//#define led1 9
//#define tempPin A0
//#define fan 11
//#define ldr 13
//#define led2 8

LiquidCrystal lcd(2,A1,A2,A3,A4,A5);
//Temprature
int fan =11;
int tempPin = A0;
float temp;
//Motion
int led1=9;
int pir1;
int motion=12;
//LDR
int led2=8;
int pir2;
int ldr=13;

void setup() {
  // put your setup code here, to run once:
  //motion
pinMode(motion,INPUT);
pinMode(led1,OUTPUT);
//Tempreture
pinMode(tempPin,INPUT);
pinMode(fan,OUTPUT);
//LDR
pinMode(ldr,INPUT);
pinMode(led2,OUTPUT);
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Home Automation");
delay(2000);
lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
temp_sensor();
motion_sensor();
ldr_sensor();
}



void temp_sensor(){
//Temprature

 int temp = analogRead(A0);
  Serial.println(temp);

  if(temp>30){
    digitalWrite(fan, HIGH);
    lcd.begin(16,3);
    lcd.setCursor(0,0);
    lcd.print("Temp is High");
    lcd.setCursor(0,1);
    lcd.print("FAN is ON");
    delay(1000);
    lcd.clear();
  }
  else{
    digitalWrite(fan, LOW);
    lcd.begin(16,4);
    lcd.setCursor(0,0);
    lcd.print("Temp is Normal");
    lcd.setCursor(0,1);
    lcd.print("FAN is OFF");
    delay(1000);
    lcd.clear();
  }
}



  //motion
  void motion_sensor(){
    pir1=digitalRead(motion);
  if(pir1==LOW){
    digitalWrite(led1,LOW);
    lcd.setCursor(0,0);
    lcd.print("Motion not Detected");
    delay(1000);
    lcd.clear();
    
  }
  else{
    digitalWrite(led1,HIGH);
    lcd.setCursor(0,1);
    lcd.print("Motion Detected");
    delay(1000);
    lcd.clear();
  }
  }

  //ldr
  void ldr_sensor(){
    pir2=digitalRead(ldr);
  if(pir2==HIGH){
    digitalWrite(led2,LOW);
    lcd.setCursor(0,0);
    lcd.print("Light OFF");
    delay(1000);
    lcd.clear();
    
  }
  else{
    digitalWrite(led2,HIGH);
    lcd.setCursor(0,1);
    lcd.print("Light ON");
    delay(1000);
    lcd.clear();
}
  }
