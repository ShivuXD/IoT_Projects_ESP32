#define IR_SENSOR 5
#define LED1 18
#define LED2 19
#define BUZZER 21

void setup() {

  pinMode(IR_SENSOR, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  noTone(BUZZER);
}

void loop() {

  int sensorValue = digitalRead(IR_SENSOR);

  if (sensorValue == LOW) {

    // Alarm state
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    tone(BUZZER, 1500);

    delay(300);

    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);

    delay(300);

  } else {

    // Normal state
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    noTone(BUZZER);
  }
}
