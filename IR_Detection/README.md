# ESP32 IR Intruder Alarm

A simple hardware-based intrusion detection system built with an ESP32, IR obstacle sensor, two LEDs, and a passive buzzer.

The system detects nearby objects using the IR sensor and triggers an audible and visual alarm when an intrusion is detected.

## Features

- IR-based object detection
- Audible alarm using a passive buzzer
- Alternating LED warning
- Automatic standby when no object is detected
- No external software required

## Hardware

| Component | Purpose |
|---|---|
| ESP32 DevKit | Main microcontroller |
| IR Obstacle Sensor | Object detection |
| Passive Buzzer | Audible alarm |
| 2 LEDs | Visual alarm |
| 220Ω/330Ω Resistors | LED protection |
| Breadboard | Prototyping |
| Jumper Wires | Connections |

## Pin Configuration

### IR Obstacle Sensor

| Sensor Pin | ESP32 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| OUT | GPIO 5 |

### LED 1

| LED Pin | ESP32 |
|---|---|
| Anode (+) | GPIO 18 through 220Ω/330Ω resistor |
| Cathode (-) | GND |

### LED 2

| LED Pin | ESP32 |
|---|---|
| Anode (+) | GPIO 19 through 220Ω/330Ω resistor |
| Cathode (-) | GND |

### Passive Buzzer

| Buzzer Pin | ESP32 |
|---|---|
| + | GPIO 21 |
| - | GND |

## How It Works

The IR sensor continuously monitors for nearby objects.

```text
Object → IR Sensor → ESP32 → LEDs + Buzzer
```
