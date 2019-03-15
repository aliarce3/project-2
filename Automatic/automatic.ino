
// This #include statement was automatically added by the Particle IDE.
#include <LiquidCrystal.h>

LiquidCrystal lcd( D7, D6, D5, D4, D3, D2);

    // Set pins as 12,11,7,6,5,4. It might be different for your LCD, check the producer catalog
int potPin = A0; //input pin 
int soil=0;

int redPin= D0;
int greenPin = D1;
int bluePin = A4;

//int purple = (170, 0, 255)

void setup() {
lcd.begin(16, 2);
//lcd.print("Humidity"); 
Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
lcd.setCursor(0, 0);
lcd.print("Soil Dryness=0%");
lcd.setCursor(0, 1);
lcd.print("I'm drowning");

  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);

delay(10000);
lcd.clear();
delay(10);

lcd.setCursor(0, 0);
lcd.print("Soil Dryness=20%");
lcd.setCursor(0, 1);
lcd.print("Too quenched");

  analogWrite(redPin, 170);
  analogWrite(greenPin, 100);
  analogWrite(bluePin, 0);

delay(5000);
lcd.clear();
delay(10);

lcd.setCursor(0, 0);
lcd.print("Soil Dryness=40%");
lcd.setCursor(0, 1);
lcd.print("Perfection!");

  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);

delay(5000);
lcd.clear();
delay(10);

lcd.setCursor(0, 0);
lcd.print("Soil Dryness=60%");
lcd.setCursor(0, 1);
lcd.print("Yeah, okay");

  analogWrite(redPin, 0);
  analogWrite(greenPin, 170);
  analogWrite(bluePin, 170);

delay(5000);
lcd.clear();
delay(10);

lcd.setCursor(0, 0);
lcd.print("Soil Dryness=80%");
lcd.setCursor(0, 1);
lcd.print("Uh, too dry?");

  analogWrite(redPin, 0);
  analogWrite(greenPin, 50);
  analogWrite(bluePin, 200);

delay(5000);
lcd.clear();
delay(10);

lcd.setCursor(0, 0);
lcd.print("Soil Dryness=100%");
lcd.setCursor(0, 1);
lcd.print("Going 2 heaven");

  analogWrite(redPin, 170);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 170);

delay(5000);
lcd.clear();
delay(10);

}






