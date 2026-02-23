#include <Arduino.h>

/*************************************************************

  This sketch shows how to read values from Virtual Pins

  App dashboard setup:
    Slider widget (0...100) on Virtual Pin V1
 *************************************************************/

/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID           "TMPL3ni3gEa-I"
#define BLYNK_TEMPLATE_NAME         "PETAL"
#define BLYNK_AUTH_TOKEN            "Snjuvrxe58fBDZrxN4-qmHVJANfw1NJj"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Petal";
char pass[] = "Petal#2024";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin V1
BLYNK_WRITE(V3)
{
  String pinValue = param.asStr(); // assigning incoming value from pin V1 to a variable
  Serial.println("Received Value - " + pinValue);
  // process received value
}

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
}
