#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define PIR_PIN 17
#define LED_PIN 5

#define OLED_SCL 18
#define OLED_SDA 19

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  Wire.begin(OLED_SDA, OLED_SCL);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(2);
  display.setCursor(20, 15);
  display.println("PIR");

  display.setTextSize(1);
  display.setCursor(20, 42);
  display.println("SENSOR READY");

  display.display();

  delay(2000);
}

void loop() {

  int motion = digitalRead(PIR_PIN);

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);
  display.setCursor(25, 5);
  display.println("MOTION SENSOR");

  display.drawLine(0, 17, 127, 17, SSD1306_WHITE);

  if (motion == HIGH) {

    digitalWrite(LED_PIN, HIGH);

    display.setTextSize(2);
    display.setCursor(5, 28);
    display.println("MOTION");

    display.setTextSize(1);
    display.setCursor(35, 50);
    display.println("DETECTED");

  } else {

    digitalWrite(LED_PIN, LOW);

    display.setTextSize(2);
    display.setCursor(20, 28);
    display.println("NO");

    display.setCursor(20, 47);
    display.println("MOTION");
  }

  display.display();

  delay(100);
}
