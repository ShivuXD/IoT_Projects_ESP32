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

| Component | ESP32 GPIO |
|---|---:|
| IR Sensor OUT | GPIO 5 |
| LED 1 | GPIO 18 |
| LED 2 | GPIO 19 |
| Buzzer | GPIO 21 |

## How It Works

The IR sensor continuously monitors for nearby objects.

```text
Object → IR Sensor → ESP32 → LEDs + Buzzer
```
