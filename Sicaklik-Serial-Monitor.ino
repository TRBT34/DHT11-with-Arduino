#include <dht11.h>
#define DHT11PIN 2

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
  Serial.println("Projekamyonu DHT11 kullanımı");
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);
  
  Serial.println();
  Serial.print("Nem (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Sicaklik (Celcius )  : ");
  Serial.print((float)DHT11.temperature, 2);
  Serial.println("°C");

  Serial.print("Sicaklik (Fahrenheit): ");
  Serial.print(DHT11.fahrenheit(), 2);
  Serial.println("°F");

  Serial.print("Sicaklik (Kelvin)    : ");
  Serial.print(DHT11.kelvin(), 2);
  Serial.println("°K");

  delay(2000);
}
