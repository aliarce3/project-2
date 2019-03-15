// This #include statement was automatically added by the Particle IDE.
#include <LiquidCrystal.h>

LiquidCrystal lcd(D7, D6, D5, D4, D3, D2);

    // Set pins as 12,11,7,6,5,4. It might be different for your LCD, check the producer catalog
int potPin = A0; //input pin 
int soil=0;

int redPin= D0 ;
int greenPin = D1;
int bluePin = A4;

//int purple = (170, 0, 255)

void setup() {
lcd.begin(16, 2);
lcd.print("DDDDDDDryness ="); 
Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  
  
}

void loop() { 
    
  // map the values
int soil = analogRead(potPin) ;
soil = constrain(soil, 485, 1023);
soil = map(soil, 485, 1023, 100, 0);
lcd.setCursor(0, 0);
//display final numbers
lcd.print(soil);
//print the percent symbol at the end
lcd.print("%");
//wait 0.1 seconds
delay(75); 
//wipe the extra characters
lcd.print("  ");
delay(1000);

if (soil <=56) {
  analogWrite(redPin, 60);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  lcd.setCursor(0, 1);
  lcd.print("I'm Drowning!!");
}

else if ((56 < soil) && (60 > soil)) {
  analogWrite(redPin, 170);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 170);
  lcd.setCursor(0, 1);
  lcd.print(" PERFECTION!! ");
} 

else if (soil >=60) {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  lcd.setCursor(0, 1);
  lcd.print("Going 2 Heaven");
}
} 