#include <EEPROM.h>
#include <OneButton.h>

#define B1 PIN_PC0
#define B2 PIN_PC1
#define B3 PIN_PD4
#define B4 PIN_PD3

#define OUT1N PIN_PC4
#define OUT2 PIN_PC3
#define OUT2N PIN_PC2
#define OUT3 PIN_PD2
#define OUT3N PIN_PD1
#define OUT4 PIN_PD0

#define LED1 PIN_PB1
#define LED2 PIN_PB2
#define LED3 PIN_PD7
#define LED4 PIN_PB0

bool _out1 = 0;
bool _out2 = 0;
bool _out3 = 0;
bool _out4 = 0;

OneButton _button1 = OneButton(B1, true, true);
OneButton _button2 = OneButton(B2, true, true);
OneButton _button3 = OneButton(B3, true, true);
OneButton _button4 = OneButton(B4, true, true);

void setup() {
  _out1 = EEPROM.read(0);
  _out2 = EEPROM.read(1);
  _out3 = EEPROM.read(2);
  _out4 = EEPROM.read(3);

  pinMode(B1, INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  pinMode(B3, INPUT_PULLUP);
  pinMode(B4, INPUT_PULLUP);

  pinMode(OUT1N, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT2N, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT3N, OUTPUT);
  pinMode(OUT4, OUTPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  
  // ----------
  _button1.setDebounceTicks(25);
  _button1.attachClick([]() {
    _out1 = !_out1;
    output(1, _out1);
    EEPROM.update(0, _out1);
  });
  _button2.setDebounceTicks(25);
  _button2.attachClick([]() {
    _out2 = !_out2;
    output(2, _out2);
    EEPROM.update(1, _out2);
  });
  _button3.setDebounceTicks(25);
  _button3.attachClick([]() {
    _out3 = !_out3;
    output(3, _out3);
    EEPROM.update(2, _out3);
  });
  _button4.setDebounceTicks(25);
  _button4.attachClick([]() {
    _out4 = !_out4;
    output(4, _out4);
    EEPROM.update(3, _out4);
  });

  delay(50);

  output(1, _out1);
  output(2, _out2);
  output(3, _out3);
  output(4, _out4);
}

void loop() {
  _button1.tick();
  _button2.tick();
  _button3.tick();
  _button4.tick();
}

void output(int number, bool state)
{
  if (number == 2)
  {
    digitalWrite(OUT1N, state);
    digitalWrite(LED2, !state);
  }
  else if (number == 1)
  {
    digitalWrite(OUT2, !state);
    digitalWrite(OUT2N, state);
    digitalWrite(LED1, state);
  }
  else if (number == 4)
  {
    digitalWrite(OUT3, !state);
    digitalWrite(OUT3N, state);
    digitalWrite(LED4, !state);
  }
  else if (number == 3)
  {
    digitalWrite(OUT4, !state);
    digitalWrite(LED3, !state);
  }
}
