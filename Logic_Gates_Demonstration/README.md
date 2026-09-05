# Logic Gates Demonstration using ESP32

A simple electronics project that demonstrates fundamental **digital logic gates** using an ESP32, push buttons, and an LED.
The push buttons act as the two binary inputs, while the LED represents the binary output of the selected logic gate.

## Components

* ESP32 Development Board
* 2 × Push Buttons
* 1 × LED
* 1 × 220Ω Resistor
* Breadboard
* Jumper Wires

## Pin Connections

The same hardware connections are used for all logic gates.

| Component          | ESP32 GPIO |
| ------------------ | ---------: |
| Button 1 (Input A) |    GPIO 18 |
| Button 2 (Input B) |    GPIO 19 |
| LED (Output)       |    GPIO 21 |

### Wiring

```text
Button 1
GPIO 18 ───── Push Button ───── GND

Button 2
GPIO 19 ───── Push Button ───── GND

LED
GPIO 21 ───── 220Ω Resistor ───── LED ───── GND
```

The buttons use the ESP32's internal **pull-up resistors** through `INPUT_PULLUP`.

Therefore:

* Button not pressed = `0` 
* Button pressed = `1`

---

## How It Works

The ESP32 continuously reads the two push buttons.

```cpp
bool A = !digitalRead(button1);
bool B = !digitalRead(button2);
```

Because `INPUT_PULLUP` is used, the physical button state is inverted:

```text
Button released → HIGH → 0
Button pressed  → LOW  → 1
```

The ESP32 then applies the selected Boolean logic operation and sends the result to GPIO 21.

## License

This project is intended for educational and demonstration purposes.
