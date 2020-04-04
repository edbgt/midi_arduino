
// ROTARY ENCODERS
#define ENCODER_DO_NOT_USE_INTERRUPTS
#include <Encoder.h>

Encoder myEnc1(26, 27);
Encoder myEnc2(24, 25);
long position1  = -999;
long position2  = -999;
int encVals[2] = {64, 64}; // set initial value of encoder to mid range of 0-127
int cVal = 0;
int counter = 3;

// POTENTIOMETERS
const int leftHighPot = A0;
const int leftMidPot = A1;
const int leftLowPot = A2;
const int slidePotLeft = A3;

const int rightHighPot = A8;
const int rightMidPot = A9;
const int rightLowPot = A10;
const int slidePotRight = A11;

const int buttonLeft = 2;
const int buttonRight = 3;

int leftHighPotVal = 0;
int leftMidPotVal = 0;
int leftLowPotVal = 0;
int slidePotLeftVal = 0;

int rightHighPotVal = 0;
int rightMidPotVal = 0;
int rightLowPotVal = 0;
int slidePotRightVal = 0;

bool buttonLeftVal = HIGH;
bool buttonRightVal = HIGH;

int lastLeftHighPotVal = 0;
int lastLeftMidPotVal = 0;
int lastLeftLowPotVal = 0;
int lastSlidePotLeftVal = 0;

int lastRightHighPotVal = 0;
int lastRightMidPotVal = 0;
int lastRightLowPotVal = 0;
int lastSlidePotRightVal = 0;

bool lastButtonLeftVal = HIGH;
bool lastButtonRightVal = HIGH;

void setup() {
  Serial.begin(115200); // enable serial communication
  pinMode(buttonLeft, INPUT);
  pinMode(buttonRight, INPUT);
}

void loop() {
  readPots();
  //readButtons();
  //readEncoders();
}
