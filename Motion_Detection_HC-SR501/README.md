# HC SR501 PIR Motion Sensing System

A simple ESP32-based motion detection project using an HC-SR501 PIR sensor, an LED, and a 0.96-inch SSD1306 OLED display.
The system detects motion using the PIR sensor, activates an LED, and displays the current motion status on the OLED.

## Features

- PIR-based motion detection
- LED motion indicator
- Real-time OLED status display
- Automatic status updates
- Simple hardware-based operation

## Hardware

| Component | Purpose |
|---|---|
| ESP32 DevKit | Main microcontroller |
| HC-SR501 PIR Sensor | Detects human movement |
| 0.96" SSD1306 OLED | Displays motion status |
| LED | Visual motion indicator |
| 220Ω/330Ω Resistor | LED current limiting |
| Breadboard | Prototyping |
| Jumper Wires | Connections |

## Pin Configuration

### HC-SR501 PIR

| Pin | ESP32 |
|---|---|
| VCC | 5V / VIN |
| GND | GND |
| OUT | GPIO 17 |

### LED

| Pin | ESP32 |
|---|---|
| Anode (+) through resistor | GPIO 5 |
| Cathode (-) | GND |

### OLED

| Pin | ESP32 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| SCL | GPIO 18 |
| SDA | GPIO 19 |

## How It Works

```text
HC-SR501
    |
    v
GPIO 17
    |
   ESP32
   /   \
  v     v
LED    OLED
```

## Live Demonstration
<img width="800" height="450" alt="motion_detection" src="https://github.com/user-attachments/assets/c3a45e5a-7ac9-4217-8b1a-1ff1389b96ff" />

