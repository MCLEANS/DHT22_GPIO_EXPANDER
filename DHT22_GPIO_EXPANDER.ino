#include "DHT.h"

#define DHTPIN 2     // pin In PCF8574 DHT is connected in
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
#define PCF8574_ADDRESS 0x02

DHT dht(DHTPIN, DHTTYPE,PCF8574_ADDRESS);


void setup() {
  dht.begin();
 

}

void loop() {
  //Read humidity value
   float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

}
