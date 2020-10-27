#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>

#include <SPI.h>

RF24 myRadio(10, 9);               // nRF24L01 (CE,CSN)
struct package
{
  int id=1;
  float temperature = 18.3;
  char  text[100] = "Text to be transmitted";
};
typedef struct package Package;
Package data;
byte addresses[][6] = {"0"};

void setup() {
  Serial.begin(115200);
  delay(1000);
  myRadio.begin();  
  myRadio.setChannel(115); 
  myRadio.setPALevel(RF24_PA_MAX);
  myRadio.setDataRate( RF24_250KBPS ) ; 
  myRadio.openWritingPipe( addresses[0]);
  delay(1000);
}

void loop() {
  myRadio.write(&data, sizeof(data)); 
  Serial.print("\nPackage:");
  Serial.print(data.id);
  Serial.print("\n");
  Serial.println(data.temperature);
  Serial.println(data.text);
  data.id = data.id + 1;
  data.temperature = data.temperature+0.1;
  delay(1000);
}
