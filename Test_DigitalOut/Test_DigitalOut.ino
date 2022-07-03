uint8_t pin[]={21,22};

void setup() {
  Serial.begin(115200);
  for(int i=0; i<sizeof(pin)/sizeof(pin[0]); i++)
    pinMode(pin[i], OUTPUT);
}

bool state = false;
void loop() {
  state = !state;
  for(int i=0; i<sizeof(pin)/sizeof(pin[0]); i++)
    digitalWrite(pin[i], state);
  delay(2000);
}
