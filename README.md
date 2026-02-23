# 🚀 ESP32 IoT Basic Projects (PlatformIO)

# 📌 Project Overview

This repository contains basic IoT experiments using ESP32 developed with PlatformIO in VS Code.

The project includes:

✅ LED Blink

✅ Analog Value Reading & Voltage Conversion (0–3.3V)

✅ WiFi Connectivity Test

✅ Blynk Cloud Data Transmission

This repository is useful for beginners who want to learn ESP32 IoT fundamentals.

# 🛠 Development Environment

- IDE: VS Code

- Extension: PlatformIO

- Framework: Arduino

- Board: ESP32 Dev Module

# 1️⃣ LED Blink
## Description

Simple LED blinking program to test GPIO output functionality.

```
#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
```
# 2️⃣ Analog Value Reading (0–3.3V Conversion)

## ADC Specifications (ESP32)

- Resolution: 12-bit

- Range: 0–4095

- Max Voltage: 3.3V

### *Formula*

``𝑉𝑜𝑙𝑡𝑎𝑔𝑒 = (𝐴𝑛𝑎𝑙𝑜𝑔 𝑉𝑎𝑙𝑢𝑒 /4095.0 ) × 3.3``

# 3️⃣ WiFi Connectivity Test

## Features

- Connects to local WiFi

- Prints IP address

- Verifies internet connection

# 4️⃣ Blynk Cloud Integration

## Features

- Sends sensor data to Blynk Cloud

- Uses Virtual Pins

- Real-time monitoring

### ⚙️ platformio.ini Configuration
```
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200

lib_deps =
    blynkkk/Blynk
```
### 📊 Serial Monitor Output Example
```
WiFi Connected!
IP Address: 192.168.1.105
Analog Value: 2048  Voltage: 1.65 V
Data Sent to Blynk
```
# 🚀 Applications

- IoT Beginner Practice

- Sensor Calibration

- Cloud Monitoring Systems

- Smart Agriculture Projects

- Grain Storage Monitoring System

# 📚 Learning Outcomes

- GPIO Control

- ADC Reading & Voltage Conversion

- WiFi Communication

- Cloud IoT Integration

# 👨‍💻 Author

- [Karthickraja Murugan](https://github.com/karthickrajathedeveloper)

- Embedded Systems & IoT Developer
## LICENSE
[MIT LICENSE](LICENSE)
