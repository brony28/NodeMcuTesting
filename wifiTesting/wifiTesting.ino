#include <ESP8266WiFi.h>

char* ssid = "JioFi4_13026E";
char* password = "8md69stfrg";

void setup() {
  WiFi.begin(ssid,password);
  Serial.begin(115200);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
    }
    Serial.println("");
    Serial.print("IP Address");
    Serial.print(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
