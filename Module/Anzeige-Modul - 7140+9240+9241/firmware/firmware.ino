#include <EEPROM.h>

#define AUX_BUTTON PIN_PC3
#define BAND1_BUTTON PIN_PC4
#define BAND2_BUTTON PIN_PC5
#define PHONO_BUTTON PIN_PD0
#define AM_BUTTON PIN_PD2
#define FM_BUTTON PIN_PD1

#define AUX_OUT PIN_PB1
#define BAND1_OUT PIN_PD7
#define BAND2_OUT PIN_PD5
#define PHONO_OUT PIN_PB2
#define AM_OUT PIN_PB0
#define FM_OUT PIN_PD6

#define IMPULS PIN_PC1

byte _impulsStates = 0;

void setup() {
  pinMode(AUX_BUTTON, INPUT_PULLUP);
  pinMode(BAND1_BUTTON, INPUT_PULLUP);
  pinMode(BAND2_BUTTON, INPUT_PULLUP);
  pinMode(PHONO_BUTTON, INPUT_PULLUP);
  pinMode(AM_BUTTON, INPUT_PULLUP);
  pinMode(FM_BUTTON, INPUT_PULLUP);

  pinMode(AUX_OUT, OUTPUT);
  pinMode(BAND1_OUT, OUTPUT);
  pinMode(BAND2_OUT, OUTPUT);
  pinMode(PHONO_OUT, OUTPUT);
  pinMode(AM_OUT, OUTPUT);
  pinMode(FM_OUT, OUTPUT);

  pinMode(IMPULS, OUTPUT);

  int input = EEPROM.read(0);
  
  sendMutingImpuls();
  resetInput();
  
  if (input == 0) {
    digitalWrite(AUX_OUT, HIGH);
  }
  else if (input == 1) {
    digitalWrite(BAND1_OUT, HIGH);
  }
  else if (input == 2) {
    digitalWrite(BAND2_OUT, HIGH);
  }
  else if (input == 3) {
    digitalWrite(PHONO_OUT, HIGH);
  }
  else if (input == 4) {
    digitalWrite(AM_OUT, HIGH);
  }
  else if (input == 5) {
    digitalWrite(FM_OUT, HIGH);
  }
}

void loop() {
  if (!digitalRead(AUX_BUTTON))
  {
    setInput(AUX_OUT);
    EEPROM.update(0, 0);
  }
  else if (!digitalRead(BAND1_BUTTON))
  {
    setInput(BAND1_OUT);
    EEPROM.update(0, 1);
  }
  else if (!digitalRead(BAND2_BUTTON))
  {
    setInput(BAND2_OUT);
    EEPROM.update(0, 2);
  }
  else if (!digitalRead(PHONO_BUTTON))
  {
    setInput(PHONO_OUT);
    EEPROM.update(0, 3);
  }
  else if (!digitalRead(AM_BUTTON))
  {
    setInput(AM_OUT);
    EEPROM.update(0, 4);
  }
  else if (!digitalRead(FM_BUTTON))
  {
    setInput(FM_OUT);
    EEPROM.update(0, 5);
  }
}

void setInput(int pin) {
  sendMutingImpuls();
  resetInput();
  digitalWrite(pin, HIGH);
}

void resetInput()
{
  digitalWrite(AUX_OUT, LOW);
  digitalWrite(BAND1_OUT, LOW);
  digitalWrite(BAND2_OUT, LOW);
  digitalWrite(PHONO_OUT, LOW);
  digitalWrite(AM_OUT, LOW);
  digitalWrite(FM_OUT, LOW);
}

void sendMutingImpuls() {
  digitalWrite(IMPULS, HIGH);
  delay(1);
  digitalWrite(IMPULS, LOW);
}
