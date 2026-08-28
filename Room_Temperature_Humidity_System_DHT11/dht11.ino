#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// DHT11
#define DHT_PIN 4
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

// OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_SDA 21
#define OLED_SCL 22
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  -1
);

void setup() {

  Serial.begin(115200);

  // Start I2C
  Wire.begin(OLED_SDA, OLED_SCL);

  // Start DHT11
  dht.begin();

  // Start OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    Serial.println("OLED not found!");

    while (true);
  }

  // Startup message
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);
  display.setCursor(20, 25);
  display.println("DHT11 Starting...");

  display.display();

  delay(2000);
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check DHT11
  if (isnan(temperature) || isnan(humidity)) {

    Serial.println("DHT11 ERROR");

    display.clearDisplay();

    display.setTextSize(1);
    display.setCursor(25, 25);
    display.println("DHT11 ERROR");

    display.display();

    delay(2000);
    return;
  }

  // Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature, 1);
  Serial.print(" C | Humidity: ");
  Serial.print(humidity, 1);
  Serial.println(" %");


  // OLED
  display.clearDisplay();

  display.setTextColor(SSD1306_WHITE);

  // Temperature
  display.setTextSize(1);
  display.setCursor(0, 5);
  display.println("Temperature:");

  display.setTextSize(2);
  display.setCursor(0, 17);
  display.print(temperature, 1);
  display.println(" C");


  // Humidity
  display.setTextSize(1);
  display.setCursor(0, 40);
  display.println("Humidity:");

  display.setTextSize(2);
  display.setCursor(0, 51);
  display.print(humidity, 1);
  display.println(" %");

  display.display();

  delay(2000);
}
