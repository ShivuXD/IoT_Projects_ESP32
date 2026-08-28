# ESP32 DHT11 OLED Monitor

A simple embedded systems project using an ESP32, DHT11 temperature and humidity sensor, and SSD1306 OLED display.

The project reads temperature and relative humidity from the DHT11 and displays the measurements in real time on a 0.96-inch OLED display. Sensor readings are also printed to the Serial Monitor for debugging and monitoring.

This project was built as a beginner embedded systems exercise to understand GPIO, I2C communication, sensor interfacing, and real-time data visualization using an ESP32.

---

## Features

- Real-time temperature measurement
- Real-time relative humidity measurement
- OLED-based data visualization
- Serial Monitor output for debugging
- DHT11 sensor error handling
- I2C communication between ESP32 and OLED
- Automatic periodic sensor updates

---

## Hardware

| Component | Purpose |
|---|---|
| ESP32 DevKit | Main microcontroller |
| DHT11 Module  | Temperature and humidity sensing |
| SSD1306 OLED 0.96" | Displays sensor readings |
| Jumper Wires | Circuit connections |
| Breadboard | Prototyping |
| USB Cable | Programming and power |

---

## Circuit Connections

### DHT11

| DHT11 Pin | ESP32 |
|---|---|
| VCC | 3.3V |
| DAT | GPIO 4 |
| GND | GND |

### SSD1306 OLED

| OLED Pin | ESP32 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

### Circuit Overview

```text
                    ESP32
                 ┌──────────┐
                 │          │
       GPIO 4 ───┤          │
                 │          │
      GPIO 21 ───┤          │
      GPIO 22 ───┤          │
                 │          │
        3.3V ────┤          │
         GND ────┤          │
                 └──────────┘
                    │    │
             ┌──────┘    └──────┐
             │                   │
          DHT11               OLED
        ┌───────┐          ┌─────────┐
        │ VCC   │          │ VCC     │
        │ DAT   │          │ GND     │
        │ GND   │          │ SDA     │
        └───────┘          │ SCL     │
                           └─────────┘
