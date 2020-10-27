#include <RF24.h>
#include <RF24Network.h>
#include <SPI.h>

RF24 radio (7, 8);
RF24Network network(radio);      // Include the radio in the network
const uint16_t this_node = 00;   // Address of this node in Octal format ( 04,031, etc)
const uint16_t node01 = 01;    
struct package
{
  int id=1;
  float temperature = 18.3;
  char  text[100] = "Text to be transmitted";
};
typedef struct package Package;
Package data;
byte addresses[][6] = {"0"};

void setup()
{
  Serial.begin(9600);
  delay(1000);
  radio.begin();  
  radio.setChannel(115); 
  radio.setPALevel(RF24_PA_MAX);
  radio.setDataRate( RF24_250KBPS ) ; 
  radio.openWritingPipe( addresses[0]);
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
