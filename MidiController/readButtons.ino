void readButtons() {
  buttonLeftVal = digitalRead(buttonLeft);
  buttonRightVal = digitalRead(buttonRight);
  
  if (lastButtonLeftVal != buttonLeftVal) {
      MIDImessage(177, 5, buttonLeftVal);
      lastButtonLeftVal = buttonLeftVal;
  }
  if (lastButtonRightVal != buttonRightVal) {
      MIDImessage(177, 6, buttonRightVal);
      lastButtonRightVal = buttonRightVal;
  }

  delay(2);
}
