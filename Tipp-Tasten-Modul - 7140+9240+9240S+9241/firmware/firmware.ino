#include <EEPROM.h>
#include <OneButton.h>

#define LOUDNESS_BUTTON 21
#define PRESENCE_BUTTON 20
#define RUMBLE_BUTTON 4
#define NOISE_BUTTON 3
#define MONO_BUTTON 2
#define MUTING_BUTTON 1
#define AFC_BUTTON 0
#define MONITOR_BUTTON 19
#define CHANNEL_BUTTON 18

#define LOUDNESS_OUT 15
#define PRESENCE_OUT 6
#define RUMBLE_OUT 8
#define NOISE_OUT 7
#define MONO_OUT 10
#define MUTING_OUT 9
#define AFC_OUT 14
#define MONITOR_OUT 5
#define CHANNEL_OUT 17

bool _loudnessImpuls = 0;
bool _presenceImpuls = 0;
bool _rumbleImpuls = 0;
bool _noiseImpuls = 0;
bool _monoImpuls = 0;
bool _mutingImpuls = 0;
bool _afcImpuls = 0;
bool _monitorImpuls = 0;
bool _channelImpuls = 0;

OneButton _loudness = OneButton(LOUDNESS_BUTTON, true, true);
OneButton _presence = OneButton(PRESENCE_BUTTON, true, true);
OneButton _rumble = OneButton(RUMBLE_BUTTON, true, true);
OneButton _noise = OneButton(NOISE_BUTTON, true, true);
OneButton _mono = OneButton(MONO_BUTTON, true, true);
OneButton _muting = OneButton(MUTING_BUTTON, true, true);
OneButton _afc = OneButton(AFC_BUTTON, true, true);
OneButton _monitor = OneButton(MONITOR_BUTTON, true, true);
//OneButton _channel = OneButton(CHANNEL_BUTTON, true, true);

void setup() {
  _loudnessImpuls = EEPROM.read(0);
  _presenceImpuls = EEPROM.read(1);
  _rumbleImpuls = EEPROM.read(2);
  _noiseImpuls = EEPROM.read(3);
  _monoImpuls = EEPROM.read(4);
  _mutingImpuls = EEPROM.read(5);
  _afcImpuls = EEPROM.read(6);
  _monitorImpuls = EEPROM.read(7);
  _channelImpuls = EEPROM.read(8);

  pinMode(LOUDNESS_BUTTON, INPUT_PULLUP);
  pinMode(PRESENCE_BUTTON, INPUT_PULLUP);
  pinMode(RUMBLE_BUTTON, INPUT_PULLUP);
  pinMode(NOISE_BUTTON, INPUT_PULLUP);
  pinMode(MONO_BUTTON, INPUT_PULLUP);
  pinMode(MUTING_BUTTON, INPUT_PULLUP);
  pinMode(AFC_BUTTON, INPUT_PULLUP);
  pinMode(MONITOR_BUTTON, INPUT_PULLUP);
  pinMode(CHANNEL_BUTTON, INPUT_PULLUP);

  pinMode(LOUDNESS_OUT, OUTPUT);
  pinMode(PRESENCE_OUT, OUTPUT);
  pinMode(RUMBLE_OUT, OUTPUT);
  pinMode(NOISE_OUT, OUTPUT);
  pinMode(MONO_OUT, OUTPUT);
  pinMode(MUTING_OUT, OUTPUT);
  pinMode(AFC_OUT, OUTPUT);
  pinMode(MONITOR_OUT, OUTPUT);
  pinMode(CHANNEL_OUT, OUTPUT);
  
  // ----------
  _loudness.attachClick([]() {
    sendImpuls(LOUDNESS_OUT);
    EEPROM.update(0, !_loudnessImpuls);
  });
  _presence.attachClick([]() {
    sendImpuls(PRESENCE_OUT);
    EEPROM.update(1, !_presenceImpuls);
  });
  _rumble.attachClick([]() {
    sendImpuls(RUMBLE_OUT);
    EEPROM.update(2, !_rumbleImpuls);
  });
  _noise.attachClick([]() {
    sendImpuls(NOISE_OUT);
    EEPROM.update(3, !_noiseImpuls);
  });
  _mono.attachClick([]() {
    sendImpuls(MONO_OUT);
    EEPROM.update(4, !_monoImpuls);
  });
  _muting.attachClick([]() {
    sendImpuls(MUTING_OUT);
    EEPROM.update(5, !_mutingImpuls);
  });
  _afc.attachClick([]() {
    sendImpuls(AFC_OUT);
    EEPROM.update(6, !_afcImpuls);
  });
  _monitor.attachClick([]() {
    sendImpuls(MONITOR_OUT);
    EEPROM.update(7, !_monitorImpuls);
  });
  //_channel.attachClick([]() {
    //digitalWrite(CHANNEL_OUT, HIGH);
    //delay(50);
    //digitalWrite(CHANNEL_OUT, LOW);
    //EEPROM.update(8, !_channelImpuls);
  //});

  delay(50);

  if (_loudnessImpuls)
  {
    sendImpuls(LOUDNESS_OUT);
  }
  if (_presenceImpuls)
  {
    sendImpuls(PRESENCE_OUT);
  }
  if (_rumbleImpuls)
  {
    sendImpuls(RUMBLE_OUT);
  }
  if (_noiseImpuls)
  {
    sendImpuls(NOISE_OUT);
  }
  if (_monoImpuls)
  {
    sendImpuls(MONO_OUT);
  }
  if (_mutingImpuls)
  {
    sendImpuls(MUTING_OUT);
  }
  if (_afcImpuls)
  {
    sendImpuls(AFC_OUT);
  }
  if (_monitorImpuls)
  {
    sendImpuls(MONITOR_OUT);
  }
  if (_channelImpuls)
  {
    digitalWrite(CHANNEL_OUT, HIGH);
    delay(50);
    digitalWrite(CHANNEL_OUT, LOW);
  }
}

void loop() {
  _loudness.tick();
  _presence.tick();
  _rumble.tick();
  _noise.tick();
  _mono.tick();
  _muting.tick();
  _afc.tick();
  _monitor.tick();
  //_channel.tick();
}

void sendImpuls(int pin)
{
  digitalWrite(pin, HIGH);
  delay(5);
  digitalWrite(pin, LOW);
}
