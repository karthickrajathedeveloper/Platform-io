#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "Petal";
const char* password = "Petal#2024";

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  Serial.print("Connecting");

  int timeout = 0;

  while (WiFi.status() != WL_CONNECTED && timeout < 20) {
    delay(500);
    Serial.print(".");
    timeout++;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nConnected!");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("\nFailed to connect!");
  }
}

void loop() {
}