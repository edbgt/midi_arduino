void readPots() {
  int diff = 4; // difference amount
  
  slidePotLeftVal = analogRead(slidePotLeft);
  slidePotRightVal = analogRead(slidePotRight);
  potLeftVal = analogRead(potLeft);
  potRightVal = analogRead(potRight);

  int slidePotLeftValdiff = slidePotLeftVal - lastSlidePotLeftVal;
  int slidePotRightValdiff = slidePotRightVal - lastSlidePotRightVal;
  int potLeftValdiff = potLeftVal - lastPotLeftVal;
  int potRightValdiff = potRightVal - lastPotRightVal;

  if (abs(slidePotLeftValdiff) > diff) {
    MIDImessage(177, 1, map(slidePotLeftVal, 1023, 0, 0, 127));
    lastSlidePotLeftVal = slidePotLeftVal;
  }
  if (abs(slidePotRightValdiff) > diff) {
    MIDImessage(177, 2, map(slidePotRightVal, 1023, 0, 0, 127));
    lastSlidePotRightVal = slidePotRightVal;
  }
  if (abs(potLeftValdiff) > diff) {
    MIDImessage(177, 3, map(potLeftVal, 1023, 0, 0, 127));
    lastPotLeftVal = potLeftVal;
  }
  if (abs(potRightValdiff) > diff) {
    MIDImessage(177, 4, map(potRightVal, 1023, 0, 0, 127));
    lastPotRightVal = potRightVal;
  }
  delay(2);
}
