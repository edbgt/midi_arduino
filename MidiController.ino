

// POTENTIOMETERS
const int slidePotLeft = A0;
const int slidePotRight = A1;
const int potLeft = A2;
const int potRight = A3;
const int buttonLeft = 2;
const int buttonRight = 3;

int slidePotLeftVal = 0;
int slidePotRightVal = 0;
int potLeftVal = 0;
int potRightVal = 0;
bool buttonLeftVal = HIGH;
bool buttonRightVal = HIGH;

int lastSlidePotLeftVal = 0;
int lastSlidePotRightVal = 0;
int lastPotLeftVal = 0;
int lastPotRightVal = 0;
bool lastButtonLeftVal = HIGH;
bool lastButtonRightVal = HIGH;

void setup() {
  Serial.begin(115200); // enable serial communication
  pinMode(buttonLeft, INPUT);
  pinMode(buttonRight, INPUT);
}

void loop() {
  readPots();
  readButtons();
}
