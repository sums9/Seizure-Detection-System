# Seizure Detection System

An analog-first medical monitoring prototype designed to detect seizure-like signal patterns using hardware-level thresholding.

## Overview
This project utilizes an **LM339 Quad Comparator** for high-speed analog signal processing, interfaced with an **Arduino** for digital logging and alert triggering. By offloading initial threshold detection to analog hardware, the system ensures low-latency response times.

##  Features
* **Analog Signal Conditioning:** Uses an LM339 for precise voltage window detection.
* **Real-time Processing:** Low-latency interrupt-driven detection on the Arduino.
* **Hybrid Architecture:** Combines the speed of analog with the logic of digital systems.
* **Visualized via:** [Insert Tool, e.g., Serial Plotter / Processing / Figma Dashboard].

## Hardware Stack
* **Microcontroller:** Arduino (Uno/Nano)
* **Integrated Circuits:** LM339 Quad Comparator
* **Sensors:** [Insert Sensor, e.g., Piezo / Simulated Signal Generator]
* **Passive Components:** Voltage divider network for reference thresholds.

##  Future Roadmap
- [ ] Integration of MPU6050 for motion-based validation.
- [ ] PCB Layout design in KiCad.
- [ ] Mobile alerts via ESP32 Wi-Fi module.
