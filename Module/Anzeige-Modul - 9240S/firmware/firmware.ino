#include <EEPROM.h>

#define AUX_OUT PIN_PB1
#define BAND1_OUT PIN_PD7
#define BAND2_OUT PIN_PD5
#define PHONO_OUT PIN_PB2
#define AM_OUT PIN_PB0
#define FM_OUT PIN_PD6

#define KD1_OUT PIN_PC1
#define KD2_OUT PIN_PC2
#define KD3_OUT PIN_PD2
#define KD4_OUT PIN_PD1

#define KD1_IN PIN_PC3
#define KD2_IN PIN_PC4
#define KD3_IN PIN_PC5
#define KD4_IN PIN_PD0

#define IMPULS PIN_PC0

#define A0 PIN_PB7
#define A1 PIN_PD4
#define A2 PIN_PD3

byte _impulsStates = 0;

void setup() {
  pinMode(AUX_OUT, OUTPUT);
  pinMode(BAND1_OUT, OUTPUT);
  pinMode(BAND2_OUT, OUTPUT);
  pinMode(PHONO_OUT, OUTPUT);
  pinMode(AM_OUT, OUTPUT);
  pinMode(FM_OUT, OUTPUT);

  pinMode(IMPULS, OUTPUT);

  pinMode(KD1_OUT, OUTPUT);
  pinMode(KD2_OUT, OUTPUT);
  pinMode(KD3_OUT, OUTPUT);
  pinMode(KD4_OUT, OUTPUT);

  pinMode(KD1_IN, INPUT_PULLUP);
  pinMode(KD2_IN, INPUT_PULLUP);
  pinMode(KD3_IN, INPUT_PULLUP);
  pinMode(KD4_IN, INPUT_PULLUP);

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);

  digitalWrite(KD1_OUT, HIGH);
  digitalWrite(KD2_OUT, HIGH);
  digitalWrite(KD3_OUT, HIGH);
  digitalWrite(KD4_OUT, HIGH);

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

  int station = EEPROM.read(1);
  sendStationImpuls(station);
  
  delay(500);
}

void loop() {
  digitalWrite(KD1_OUT, LOW);
  delay(1);
  if (!digitalRead(KD1_IN))
  {
    // AUX
    setInput(AUX_OUT);
    EEPROM.update(0, 0);
  }
  else if (!digitalRead(KD2_IN))
  {
    // BD1
    setInput(BAND1_OUT);
    EEPROM.update(0, 1);
  }
  else if (!digitalRead(KD3_IN))
  {
    // BD2
    setInput(BAND2_OUT);
    EEPROM.update(0, 2);
  }
  digitalWrite(KD1_OUT, HIGH);

  digitalWrite(KD2_OUT, LOW);
  delay(1);
  if (!digitalRead(KD1_IN))
  {
    // PHONO
    setInput(PHONO_OUT);
    EEPROM.update(0, 3);
  }
  else if (!digitalRead(KD2_IN))
  {
    // AM
    setInput(AM_OUT);
    EEPROM.update(0, 4);
  }
  else if (!digitalRead(KD3_IN))
  {
    // FM
    setInput(FM_OUT);
    EEPROM.update(0, 5);
  }
  digitalWrite(KD2_OUT, HIGH);

  digitalWrite(KD3_OUT, LOW);
  delay(1);
  if (!digitalRead(KD1_IN))
  {
    // U3
    setInput(FM_OUT);
    sendStationImpuls(3);
    EEPROM.update(1, 3);
  }
  else if (!digitalRead(KD2_IN))
  {
    // U2
    setInput(FM_OUT);
    sendStationImpuls(2);
    EEPROM.update(1, 2);
  }
  else if (!digitalRead(KD3_IN))
  {
    // U1
    setInput(FM_OUT);
    sendStationImpuls(1);
    EEPROM.update(1, 1);
  }
  digitalWrite(KD3_OUT, HIGH);

  digitalWrite(KD4_OUT, LOW);
  delay(1);
  if (!digitalRead(KD1_IN))
  {
    // U6
    setInput(FM_OUT);
    sendStationImpuls(6);
    EEPROM.update(1, 6);
  }
  else if (!digitalRead(KD2_IN))
  {
    // U5
    setInput(FM_OUT);
    sendStationImpuls(5);
    EEPROM.update(1, 5);
  }
  else if (!digitalRead(KD3_IN))
  {
    // U4
    setInput(FM_OUT);
    sendStationImpuls(4);
    EEPROM.update(1, 4);
  }
  else if (!digitalRead(KD4_IN))
  {
    // U
    setInput(FM_OUT);
    sendStationImpuls(0);
    EEPROM.update(1, 0);
  }
  digitalWrite(KD4_OUT, HIGH);
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

void sendStationImpuls(int number)
{
  if (number == 1)
  {
    // U1
    digitalWrite(A2, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A0, LOW);
  }
  else if (number == 2)
  {
    // U2
    digitalWrite(A2, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A0, HIGH);
  }
  else if (number == 3)
  {
    // U3
    digitalWrite(A2, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A0, LOW);
  }
  else if (number == 4)
  {
    // U4
    digitalWrite(A2, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A0, HIGH);
  }
  else if (number == 5)
  {
    // U5
    digitalWrite(A2, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A0, LOW);
  }
  else if (number == 6)
  {
    // U6
    digitalWrite(A2, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A0, HIGH);
  }
  else if (number == 0)
  {
    // U
    digitalWrite(A2, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A0, LOW);
  }
}
