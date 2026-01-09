# WakeWise – Adaptive Smart Sunglasses for Driver Drowsiness Detection

## Abstract
Driver drowsiness is a major cause of road accidents, especially during long and monotonous driving. Existing systems often rely on cameras or loud alarms, which can be distracting and raise privacy concerns. WakeWise introduces a smart sunglasses–based driver drowsiness detection system using vibration and motion sensing. The system monitors head movement patterns and detects abnormal inactivity or nodding behavior that indicates micro-sleep. When drowsiness is detected, a pattern-based vibration alert is triggered to wake the driver in a non-intrusive manner. The system is lightweight, wearable, low-power, and privacy-friendly.

## Project Overview
WakeWise is designed as a wearable driver safety system integrated into a pair of sunglasses. Sensors embedded in the frame continuously monitor the driver’s head movement during driving. The system learns the driver’s normal movement behavior and compares it with real-time sensor data. When abnormal inactivity or nodding patterns are detected for a predefined duration, the microcontroller triggers a vibration motor mounted on the glasses. This vibration alert helps the driver regain alertness without using sound or visual distraction, improving driving safety.

## Hardware Components
- Vibration Sensor (SW-420)
- Motion Sensor (MPU6050)
- Microcontroller (Arduino Nano / ESP32)
- Vibration Motor
- Rechargeable Battery
- Smart Sunglasses Frame

## How It Works
1. Sensors monitor head movement in real time.
2. Normal movement behavior is observed.
3. Abnormal inactivity or nodding is detected.
4. Vibration alert is triggered to wake the driver.

## Future Scope
- Eye blink detection
- Mobile application integration
- Emergency alert system
- AI-based fatigue prediction
