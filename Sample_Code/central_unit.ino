/*
  RAKSHA - Smart Aquatic Rescue System
  Sample Code: Centralized Monitoring Unit

  Demonstrates:
  - Receiving emergency information
  - Zone monitoring
  - GPS information display
  - Emergency status monitoring

*/

#define BUZZER_PIN 5

String emergencyStatus = "NORMAL";
String zoneInformation = "ZONE 3";
String gpsInformation = "GPS NOT AVAILABLE";

void setup() {

  Serial.begin(115200);

  pinMode(BUZZER_PIN, OUTPUT);

  Serial.println("--------------------------------");
  Serial.println("RAKSHA Centralized Monitoring Unit");
  Serial.println("--------------------------------");

  Serial.println("ESP32 Initialized");
  Serial.println("Monitoring System Ready");
}

void loop() {

  // Sample emergency data reception
  checkEmergencyData();

  // Display current monitoring information
  displaySystemStatus();

  delay(3000);
}


void checkEmergencyData() {

  // Demonstration emergency condition
  bool emergencyDetected = true;

  if (emergencyDetected) {

    emergencyStatus = "EMERGENCY ACTIVE";

    Serial.println("");
    Serial.println("!!! EMERGENCY ALERT RECEIVED !!!");

    // Emergency notification
    digitalWrite(BUZZER_PIN, HIGH);
    delay(300);
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("Zone: " + zoneInformation);
    Serial.println("GPS: " + gpsInformation);
  }
}


void displaySystemStatus() {

  Serial.println("");
  Serial.println("----- CENTRALIZED MONITORING -----");

  Serial.println("ESP32: ACTIVE");
  Serial.println("Status: " + emergencyStatus);
  Serial.println("Zone: " + zoneInformation);
  Serial.println("GPS Information: " + gpsInformation);

  Serial.println("----------------------------------");

  /*
    Actual WiFi/ESP-NOW communication,
    real GPS processing, and complete
    emergency coordination logic are
    maintained in the private repository.
  */
}
