/*
  RAKSHA - Smart Aquatic Rescue System
  Sample Code: Victim Wearable Unit

  Demonstrates:
  - SOS button detection
  - Water detection
  - GPS data acquisition
  - MPU6050 motion sensing
  - Emergency alert generation

  Note:
  This is a sample demonstration code.
*/

#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

#define SOS_BUTTON_PIN 4
#define WATER_SENSOR_PIN 34

Adafruit_MPU6050 mpu;

bool emergencyActive = false;

void setup() {

  Serial.begin(115200);

  pinMode(SOS_BUTTON_PIN, INPUT_PULLUP);
  pinMode(WATER_SENSOR_PIN, INPUT);

  Wire.begin();

  // Initialize MPU6050
  if (!mpu.begin()) {
    Serial.println("MPU6050 not detected!");
  } else {
    Serial.println("MPU6050 initialized");
  }

  Serial.println("--------------------------------");
  Serial.println("RAKSHA Victim Wearable Unit");
  Serial.println("System Ready");
  Serial.println("--------------------------------");
}

void loop() {

  // Read SOS Button
  int sosState = digitalRead(SOS_BUTTON_PIN);

  // Read Water Sensor
  int waterValue = analogRead(WATER_SENSOR_PIN);

  // Read MPU6050
  sensors_event_t acceleration;
  sensors_event_t gyro;
  sensors_event_t temperature;

  mpu.getEvent(&acceleration, &gyro, &temperature);

  // SOS Emergency
  if (sosState == LOW) {

    emergencyActive = true;

    Serial.println("!!! SOS EMERGENCY ACTIVATED !!!");
    sendEmergencyAlert();
  }

  // Water Detection
  if (waterValue > 1500) {

    Serial.println("Water detected");

    if (!emergencyActive) {
      Serial.println("Monitoring victim condition...");
    }
  }

  // Motion Data
  Serial.print("Acceleration X: ");
  Serial.println(acceleration.acceleration.x);

  delay(1000);
}


// Sample Emergency Alert Function
void sendEmergencyAlert() {

  Serial.println("Emergency Alert Sent");

  Serial.println("Data:");
  Serial.println("- Emergency Status: ACTIVE");
  Serial.println("- Zone Information: Available");
  Serial.println("- GPS Location: Requested");

  /*
    Actual system communication,
    GPS transmission, relay activation,
    and centralized monitoring logic
    are implemented in the private code.
  */
}
