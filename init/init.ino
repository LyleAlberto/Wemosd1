/**
 * Init file
 */

#include <ESP8266WiFi.h>

/**
 * WifiServer server
 * init server on port 80
 */
WiFiServer server(80);

/**
 * boolean alreadyConnectedToWifiNetwork
 * whether or not the client was connected previously
 */
boolean alreadyConnectedToWifiNetwork = false;

/**
 * setup 
 * Arduino setup function
 */
void setup() {
  // put your setup code here, to run once:
  if (!getEnvironment()) {
    Serial.begin(9600);
    Serial.println("Lyle gay");
    Serial.println(getEnvironment());
  }
  
  
}

/**
 * loop
 * Arduino loop function
 */
void loop() {
  // put your main code here, to run repeatedly:

}
