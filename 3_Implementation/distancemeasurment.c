#include<LiquidCrystal.h>
/*
        Ultrasonic sensor Pins:
        VCC: +5VDC
        Trig : Trigger (INPUT) - Pin10
        Echo: Echo (OUTPUT) - Pin 9
        GND: GND
 */
int trigPin = 10;    // Trigger
int echoPin = 9;    // Echo
long duration, cm, inches;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // sets the interfacing pins

void setup()
{
 lcd.begin(16, 2);  // initializes the 16x2 LCD
   //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.setCursor(2,0);           //sets the cursor at row 0 column 5
  lcd.print("HELLO WORLD"); 
  delay(5000);
  lcd.clear();
}

void loop()
{
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(250);
  //LCD DISPLAY
  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Distance:");
  lcd.setCursor(10,0);           //sets the cursor at row 1 column 10
  lcd.print(inches); 
  lcd.print("in, "); 
  lcd.setCursor(10,1);           //sets the cursor at row 1 column 10
  lcd.print(cm); 
  lcd.print("cm");    
}