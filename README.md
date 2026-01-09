# WakeWise – Smart Sunglasses Based Driver Drowsiness Detection Using Eye Blink and Vibration Alert

## Abstract
Driver drowsiness is one of the leading causes of road accidents, especially during long-distance and night-time driving. One of the earliest indicators of drowsiness is prolonged eye closure and irregular blink patterns. WakeWise is a smart sunglasses–based driver drowsiness detection system that continuously monitors the driver’s eye activity using an eye blink sensor. When abnormal eye closure is detected, the system activates a vibration alert to wake the driver. The proposed system is wearable, non-intrusive, low-power, and privacy-friendly, making it suitable for real-time driver safety applications.

## Project Overview
WakeWise is designed as a wearable safety system integrated into a pair of smart sunglasses. An infrared (IR) eye blink sensor mounted on the glasses frame continuously detects the driver’s eye opening and closing patterns. During normal driving conditions, blinking occurs at regular intervals. When the driver becomes drowsy, the eyes remain closed for a longer duration, indicating micro-sleep.

The eye blink sensor output is processed by a microcontroller that measures the eye closure duration. If the eyes remain closed beyond a predefined safe threshold, the system identifies the condition as drowsiness and triggers a vibration motor mounted on the sunglasses. The vibration alert provides immediate tactile feedback to wake the driver without using sound or visual distraction, thereby improving road safety.

## Hardware Components
- IR Eye Blink Sensor
- Microcontroller (Arduino Nano / ESP32)
- Vibration Motor
- Rechargeable Battery
- Smart Sunglasses Frame

## How It Works
1. Eye blink sensor continuously monitors eye activity.
2. Normal blinking is identified as short eye closures.
3. Prolonged eye closure indicates drowsiness.
4. Vibration alert is activated to wake the driver.

## Future Scope
- Adaptive blink threshold for individual drivers
- Bluetooth-based mobile alert system
- Emergency contact notification
- AI-based fatigue detection
