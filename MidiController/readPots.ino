void readPots() {
  int diff = 4; // difference amount
  
  slidePotLeftVal = analogRead(slidePotLeft);
  slidePotRightVal = analogRead(slidePotRight);
  
  leftHighPotVal = analogRead(leftHighPot);
  leftMidPotVal = analogRead(leftMidPot);
  leftLowPotVal = analogRead(leftLowPot);

  rightHighPotVal = analogRead(rightHighPot);
  rightMidPotVal = analogRead(rightMidPot);
  rightLowPotVal = analogRead(rightLowPot);

  int slidePotLeftValdiff = slidePotLeftVal - lastSlidePotLeftVal;
  int slidePotRightValdiff = slidePotRightVal - lastSlidePotRightVal;
  
  int leftHighPotValdiff = leftHighPotVal - lastLeftHighPotVal;
  int leftMidPotValdiff = leftMidPotVal - lastLeftMidPotVal;
  int leftLowPotValdiff = leftLowPotVal - lastLeftLowPotVal;
  
  int rightHighPotValdiff = rightHighPotVal - lastRightHighPotVal;
  int rightMidPotValdiff = rightMidPotVal - lastRightMidPotVal;
  int rightLowPotValdiff = rightLowPotVal - lastRightLowPotVal;

  if (abs(slidePotLeftValdiff) > diff) {
    MIDImessage(177, 1, map(slidePotLeftVal, 1023, 0, 0, 127));
    lastSlidePotLeftVal = slidePotLeftVal;
  }
  if (abs(slidePotRightValdiff) > diff) {
    MIDImessage(177, 2, map(slidePotRightVal, 1023, 0, 0, 127));
    lastSlidePotRightVal = slidePotRightVal;
  }
  if (abs(leftHighPotValdiff) > diff) {
    MIDImessage(177, 3, map(leftHighPotVal, 1023, 0, 0, 127));
    lastLeftHighPotVal = leftHighPotVal;
  }
  if (abs(leftMidPotValdiff) > diff) {
    MIDImessage(177, 4, map(leftMidPotVal, 1023, 0, 0, 127));
    lastLeftMidPotVal = leftMidPotVal;
  }
  if (abs(leftLowPotValdiff) > diff) {
    MIDImessage(177, 5, map(leftLowPotVal, 1023, 0, 0, 127));
    lastLeftLowPotVal = leftLowPotVal;
  }
  if (abs(rightHighPotValdiff) > diff) {
    MIDImessage(177, 6, map(rightHighPotVal, 1023, 0, 0, 127));
    lastRightHighPotVal = rightHighPotVal;
  }
  if (abs(rightMidPotValdiff) > diff) {
    MIDImessage(177, 7, map(rightMidPotVal, 1023, 0, 0, 127));
    lastRightMidPotVal = rightMidPotVal;
  }
  if (abs(rightLowPotValdiff) > diff) {
    MIDImessage(177, 8, map(rightLowPotVal, 1023, 0, 0, 127));
    lastRightLowPotVal = rightLowPotVal;
  }
  delay(2);
}
