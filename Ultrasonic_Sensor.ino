#include <LiquidCrystal.h>
long duration;
int distance;

LiquidCrystal lcd(12, 11, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, LOW);
  delayMicroseconds(3);
  digitalWrite(9, HIGH);
  delayMicroseconds(10);
  digitalWrite(9, LOW);
  duration = pulseIn(2, HIGH);
  distance = (duration*0.034)/2;
  lcd.setCursor(0,0);
  lcd.print("Distance ");
  lcd.println(distance);
  delay(10);
}
