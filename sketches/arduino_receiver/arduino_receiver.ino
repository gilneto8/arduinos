#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>

#include <SPI.h>

RF24 myRadio (10, 9);
struct package
{
  int id=0;
  float temperature = 0.0;
  char  text[100] ="empty";
};
typedef struct package Package;
Package data;
const uint64_t pipe = 0xE6E6E6B2B2B2;

void setup() {
  Serial.begin(9600);
  delay(1000);
  myRadio.begin(); 
  myRadio.openReadingPipe(1, pipe);
  myRadio.startListening();
}

void loop() {
  if ( myRadio.available()) 
  {
    while (myRadio.available())
    {
      myRadio.read( &data, sizeof(data) );
    }
    Serial.print("\nPackage:");
    Serial.print(data.id);
    Serial.print("\n");
    Serial.println(data.temperature);
    Serial.println(data.text);
  }
}
