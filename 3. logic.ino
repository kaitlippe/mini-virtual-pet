int logic() {
  for (int i = 0; i < ledCount; i++) {
    buttonState = digitalRead(buttonPin);
    long currentTime = millis();
    if (buttonState == HIGH && previousButtonState == LOW && currentTime - previousTime > buttonInterval) {
      if (pressed == 0) {
        pressed = 1;
        x = 0;
      } else {
        pressed = 0;
      }
      previousTime = currentTime;
    }

    Serial.println(currentTime - previousTime);
    if (currentTime - previousTime >= 10000) { //blink leds after 10 seconds 
      long blinkCurrentTime = millis();
      digitalRead(leds[i]);
      if (blinkCurrentTime - blinkPrevTime >= blinkInterval) {
        if (blinkInterval <= 500) { //blink interval counts down until < 500
          blinkInterval == 400;
          blinkInterval -= 0;
        } else {
          blinkInterval -= random(100, 500); //blink interval counts down w/ random # 
        }
        if (leds[i] == HIGH) { //if on, turn off
          digitalWrite(leds[0], LOW);
          digitalWrite(leds[1], LOW);
          digitalWrite(leds[2], LOW);
          digitalWrite(leds[3], LOW);
          digitalWrite(leds[4], LOW);
        } else { //else turn on
          digitalWrite(leds[0], HIGH);
          digitalWrite(leds[1], HIGH);
          digitalWrite(leds[2], HIGH);
          digitalWrite(leds[3], HIGH);
          digitalWrite(leds[4], HIGH);
        }
        blinkPrevTime = blinkCurrentTime;
      }
    }
    previousButtonState = buttonState; //resets button + time
  }


}