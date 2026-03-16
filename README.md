# Joystick-Controlled LED Direction Indicator

4 LEDs indicate joystick direction in real time. A switch button toggles between joystick mode and all-on mode.

---

## Demo

![Demo GIF](demo.gif)

---

## How It Works

The joystick outputs two analog values (X and Y axes). These are read and mapped to 4 directional LEDs. A built-in switch button uses `INPUT_PULLUP`. When not pressed, the joystick controls the LEDs; when pressed, all LEDs light up.

---

## Components
- Arduino Uno
- 1x Joystick module (X, Y, SW)
- 4x LED (left, right, up, down)
- 4x 330Ω Resistor
- Breadboard + Jumper Wires



## Skills
`Arduino` `C++` `Analog Input` `Embedded Systems`
