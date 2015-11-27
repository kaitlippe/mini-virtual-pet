//int anime01() {
//  int currentMillis = millis();
//  ledSpeed = 100;
//  if (currentMillis - previousMillis > ledSpeed) {
//    for (int i = 0; i < 5; i++) {
//      ledsMax[i] = 1000;
//      ledsVal[i]++;
//      if (ledsVal[i] >= 255) {
//        ledsVal[i]--;
//      }
//    }
//    previousMillis = currentMillis;
//  }
//}
//
//int anime02() {
//  int currentTime = millis(); // check the time
//  ledSpeed = 600;
//  ledState = 1;
//  if (currentTime - prevLedTime >= ledSpeed) { //if enough time has gone by:
//    ledsDir[ledState] = 0;
//    ledState++;
//    if (ledState == 5) ledState = 0;
//    ledsDir[ledState] = 3;
//    x += 200;
//    //Serial.println(x);
//    prevLedTime = currentTime;
//  }
//  if (x - y >= 3000) {
//    ledsDir[ledState] = 0;
//    x = y;
//  }
//}
//
//
//
//int updateLED() {
//  unsigned long currentMillis = millis();
//  if (currentMillis - fadePreviousMillis >= fadeSpeed) {
//    for (int i = 0; i < pinCount; i++) {
//      switch (ledsDir[i]) {
//        case 0: // stay at 0 or fade down to 0
//          if (ledsVal[i] > 0) ledsVal[i]--;
//          break;
//        case 1: // fading up and down - up
//          ledsVal[i]++;
//          if (ledsVal[i] >= 255) ledsDir[i] = 2;
//          break;
//        case 2: // fading up and down - down
//          ledsVal[i]--;
//          if (ledsVal[i] <= 0) ledsDir[i] = 1;
//          break;
//        case 3: // stay at 255 or fade up to 255
//          if (ledsVal[i] < 255) ledsVal[i]++;
//          break;
//      }
//      int x = map(ledsVal[i], 0, 300, 0, 255);
//      analogWrite(leds[i], x);
//      fadePreviousMillis = currentMillis;
//    }
//  }
//}