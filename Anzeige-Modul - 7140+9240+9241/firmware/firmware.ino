#include <EEPROM.h>
#include <OneButton.h>

#define AUX_BUTTON 2
#define BAND1_BUTTON 1
#define BAND2_BUTTON 0
#define PHONO_BUTTON 21
#define AM_BUTTON 4
#define FM_BUTTON 3

#define AUX_OUT 9
#define BAND1_OUT 7
#define BAND2_OUT 5
#define PHONO_OUT 10
#define AM_OUT 8
#define FM_OUT 6

#define IMPULS 15

OneButton _aux = OneButton(AUX_BUTTON, true, true);
OneButton _band1 = OneButton(BAND1_BUTTON, true, true);
OneButton _band2 = OneButton(BAND2_BUTTON, true, true);
OneButton _phono = OneButton(PHONO_BUTTON, true, true);
OneButton _am = OneButton(AM_BUTTON, true, true);
OneButton _fm = OneButton(FM_BUTTON, true, true);

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
  
  // ----------
  _aux.attachClick([]() {
    setInput(AUX_OUT);
    EEPROM.update(0, 0);
  });
  _band1.attachClick([]() {
    setInput(BAND1_OUT);
    EEPROM.update(0, 1);
  });
  _band2.attachClick([]() {
    setInput(BAND2_OUT);
    EEPROM.update(0, 2);
  });
  _phono.attachClick([]() {
    setInput(PHONO_OUT);
    EEPROM.update(0, 3);
  });
  _am.attachClick([]() {
    setInput(AM_OUT);
    EEPROM.update(0, 4);
  });
  _fm.attachClick([]() {
    setInput(FM_OUT);
    EEPROM.update(0, 5);
  });

  delay(500);
}

void loop() {
  _aux.tick();
  _band1.tick();
  _band2.tick();
  _phono.tick();
  _am.tick();
  _fm.tick();
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
