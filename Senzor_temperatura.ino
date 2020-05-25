#include <dht11.h>
#define DHT11PIN 4

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
 pinMode(13, OUTPUT);
}

void loop()
{
  Serial.println();

  int chk = DHT11.read(DHT11PIN);

  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 4);
  Serial.println(DHT11.humidity);
  Serial.print("Temperature (C): ");
  Serial.println((float)DHT11.temperature, 4);
  int var = DHT11.temperature;
  Serial.println(var);
  if(var>26){
    //ventilator ON
     digitalWrite(13, HIGH);
  }else{
    //ventilator OFF
    digitalWrite(13, LOW);
  }

  delay(2000);

}
