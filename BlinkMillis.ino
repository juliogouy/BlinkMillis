#include <WiFiS3.h>

const char WIFI_SSID[] = "Baloo";
const char WIFI_PASS[] = "Pswd123$";

const int LED_PIN = LED_BUILTIN;
const unsigned long BLINK_INTERVAL = 500;

unsigned long previousMillis = 0;
int ledState = LOW;

void connectWiFi() {
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);

  int status = WL_IDLE_STATUS;
  while (status != WL_CONNECTED) {
    status = WiFi.begin(WIFI_SSID, WIFI_PASS);
    if (status != WL_CONNECTED) {
      Serial.println("Connection failed, retrying in 5s...");
      delay(5000);
    }
  }

  Serial.println("WiFi connected, waiting for IP...");
  while (WiFi.localIP() == IPAddress(0, 0, 0, 0)) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  connectWiFi();
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= BLINK_INTERVAL) {
    previousMillis = currentMillis;
    ledState = (ledState == LOW) ? HIGH : LOW;
    digitalWrite(LED_PIN, ledState);
  }
}
