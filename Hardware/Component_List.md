# Hardware Components

## 1. Victim Wearable Device

| Component | Purpose |
|---|---|
| ESP32 | Main controller for the wearable device |
| Water Sensor | Detects contact with water |
| PPM Sensor | Monitors the required victim parameter |
| MPU6050 | Detects motion and orientation |
| SOS Button | Allows manual emergency activation |
| NEO-6M GPS Module | Provides victim location |
| OLED Display | Displays system and emergency information |
| Relay Module | Controls the airbag activation |
| Airbag / Flotation Unit | Provides emergency flotation support |
| Battery | Powers the wearable device |

---

## 2. Centralized Monitoring Unit

| Component | Purpose |
|---|---|
| ESP32 | Receives and processes emergency information |
| Display | Shows zone and GPS information |
| Communication Module | Receives emergency data from the victim wearable |
| Alarm System | Provides emergency notification |
| Power Supply | Powers the monitoring unit |

---

## 3. Rescue Dispatcher Unit

| Component | Purpose |
|---|---|
| ESP32 / Controller | Processes rescue information |
| Display | Shows emergency alerts and victim details |
| Communication System | Receives emergency information |
| Alarm / Buzzer | Alerts the rescue personnel |
| Power Supply | Powers the dispatcher unit |

The Rescue Dispatcher Unit receives:

- Alert display
- GPS data
- Victim details
- Zone information

---

## 4. Autonomous Rescue Robot

| Component | Purpose |
|---|---|
| Raspberry Pi | Main processing unit |
| GPS Module | Navigation and location tracking |
| Camera Module | Provides visual input |
| Motor Driver | Controls the motors |
| DC Motors | Moves the rescue boat |
| Scoop Mechanism | Assists in victim rescue |
| Red Light Detection System | Supports visual detection |
| Battery | Powers the rescue robot |

---

## Hardware Summary

The RAKSHA Smart Aquatic Rescue System consists of four interconnected sections:

1. Victim Wearable Device
2. Centralized Monitoring Unit
3. Rescue Dispatcher Unit
4. Autonomous Rescue Robot

These hardware units work together to detect an aquatic emergency, transmit location information, notify rescue personnel, and support autonomous rescue operations.
