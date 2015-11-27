//leds
int leds[] = { 5, 6, 9, 10, 11};
int ledCount = 5;
int ledSpeed = 500;
int ledState;
long previousMillis;
byte ledsVal[] = {0, 0, 0, 0, 0};
byte ledsDir[] = {0, 0, 0, 0, 0};
int x;
int y;
int ledsMax[] = {400, 400, 400, 400, 400};

int prevLedTime;
int fadeSpeed = 5;
int fadePreviousMillis;
int pinCount = 5;
int ledsSwitch;

//button
int buttonPin = 13;
int pressed = 0;
int buttonState = LOW;
int previousButtonState = HIGH;
long buttonInterval = 1000;
long previousTime;


//attention blinking variables
long blinkPrevTime;
int blinkInterval = 1000;


int petState;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  logic();
//  updateLED();

}
