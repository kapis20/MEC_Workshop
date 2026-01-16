# MEC_Workshop — Arduino Labs for MEC217 (E-bike Design Project Support)

This repository contains Arduino sketches and teaching materials used to support the **MEC217 Design Project** module. The labs were delivered as a **6-week hands-on program** to help students build practical embedded/electronics skills and apply them to an **electric bike (e-bike)** design project.

## What this repo was used for
- Supported MEC217 Design Project labs, helping student teams develop an e-bike design through hands-on sessions
- Created and delivered teaching content across core Arduino + electronics topics:
  - Digital I/O, LEDs, RGB LEDs
  - Voltmeters, potentiometers, phototransistors
  - LED strips (FastLED)
  - Servo/DC motors and basic motor drive intro
  - Interrupts and Hall effect sensors
  - Buzzers and mixed-sensor exercises
- Guided students in applying Arduino to prototype e-bike features (controls, sensing, indicators)
- Provided ongoing troubleshooting, feedback, and project management support

---

## Repository structure
```text
sketches/                 Arduino sketches grouped by topic
  01_basics/              intro + digital I/O
  02_analog/              ADC, potentiometers, voltage measurement, sensors
  03_rgb_leds/            RGB LED examples
  04_motors/              motor drive basics
  05_interrupts_hall/     interrupts and hall sensor exercises
  06_led_strips_fastled/  addressable LED strip sketches (FastLED)
  07_buzzer/              buzzer exercises

docs/                     (optional) worksheets, wiring diagrams, slides
libraries/                (optional) vendored Arduino libraries (if included)
