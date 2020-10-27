#include <RF24.h>
#include <RF24Network.h>
#include <SPI.h>

RF24 radio (7, 8);

struct package
{
  int id=1;
  float temperature = 18.3;
  char  text[100] = "Text to be transmitted";
};
typedef struct package Package;
Package data;
const uint64_t pipe = 0xE6E6E6B2B2B2;

void setup()
{
  Serial.begin(9600);
  delay(1000);
  radio.begin();
  radio.openWritingPipe(pipe);
  delay(1000);
}

void loop()
{
  radio.write(&data, sizeof(data)); 
  Serial.print("\nPackage:");
  Serial.print(data.id);
  Serial.print("\n");
  Serial.println(data.temperature);
  Serial.println(data.text);
  data.id = data.id + 1;
  data.temperature = data.temperature+0.1;
  delay(1000);
}
