// PROJECT DETAILS:

// AUTHOR: IMRE ABEL
// DATE: 6/5/2025

// SIMPLE LED COLOR SWITCH USING RGB (RED, CATHODE, GREEN, BLUE)
// CONNECTED RGB TO BREADBOARD, POWERED RGB WITH ARDUINO UNO 5V POWER PIN 
// USED 220OHMS RESISTORS TO PREVENT RGB FROM BURNING OUT
// GROUNDED CATHODE PIN TO ARDUINO UNO USING JUMPER CABLE, ALSO POWERED RGB WITH COLOR CODED RGB JUMPER CABLES 
// WROTE BASIC SCRIPT TO CONTROL POWER TO EACH LED FOR DESIRED COLOR AND DURATION BETWEEN COLOR CHANGES  


// Define Pins
#define BLUE 6
#define GREEN 9
#define RED 10

void setup() {
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(GREEN, LOW);
}

// define variables
int redValue;
int greenValue;
int blueValue;


void loop() {
// start with defining delay time
#define delayTime 10

// setup first color in the loop, mine will be RED
for ( int i = 0; i < 255; i += 1)
{
  analogWrite(RED, 255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(delayTime); 
}

// repeat same process for first color but now we will do GREEN
for ( int i = 0; i < 255; i += 1)
{
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
  delay(delayTime); 
}

// for the final time repeat step 1 of color setup, my final color will be PURPLE a mix of RED and BLUE
for ( int i = 0; i < 255; i += 1)
{
  analogWrite(RED, 150);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 150);
  delay(delayTime); 
}
}
