#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

// WiFi Credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

// DHT Sensor Configuration
#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// Create KiwisIoT Object
KiwisIoT kiwisiot(ssid, pass, topic);

void setup() {
  Serial.begin(115200);

  Serial.println();
  Serial.println("ESP8266 Temperature and Humidity Monitoring");

  // Initialize DHT Sensor
  dht.begin();

  // Initialize KiwisIoT
  kiwisiot.begin();

  Serial.println("DHT Sensor Initialized");
  Serial.println("KiwisIoT Initialized");
}

void loop() {

  // Maintain KiwisIoT Connection
  kiwisiot.run();

  // Read Temperature and Humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check Sensor Readings
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  // Send Temperature to Channel 0
  kiwisiot.send("0", temperature);

  // Send Humidity to Channel 1
  kiwisiot.send("1", humidity);

  // Display Temperature
  Serial.print("Room Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Display Humidity
  Serial.print("Room Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("------------------------");

  // Wait for 1 Second
  delay(1000);
}
