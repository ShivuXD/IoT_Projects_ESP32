const int button1 = 18;
const int button2 = 19;
const int led = 21;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  bool A = !digitalRead(button1);
  bool B = !digitalRead(button2);
  
  bool output = !(A && B);

  digitalWrite(led, output);
}
