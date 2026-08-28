# ESP32 DHT11 Room Temperature and, Humidity Monitoring System

A simple embedded systems project using an ESP32, DHT11 temperature and humidity sensor, and SSD1306 OLED display.

The system reads temperature (with error of ±2°C) and relative humidity (with error of ±5% RH) from the DHT11 and displays the measurements in real time on a 0.96-inch OLED display. 

---

## Features

- Real-time temperature measurement
- Real-time relative humidity measurement
- OLED-based data visualization
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
```

### Project Image
<img width="1156" height="652" alt="image" src="https://github.com/user-attachments/assets/b5f7d153-f22c-431c-b9a0-9c1cdcd05beb" />

