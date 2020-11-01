#include <RF24.h>
//#include <RF24Network.h>
#include <SPI.h>

struct package
{
  int id=1;
  float temperature = 18.3;
  char  text[100] = "Text to be transmitted";
};
typedef struct package Package;

RF24 radio (7, 8);
/*RF24Network network(radio);      // Network uses that radio
const uint16_t this_node = 00;    // Address of our node in Octal format ( 04,031, etc)
const uint16_t node01 = 01;   // Address of the other node in Octal format
RF24NetworkHeader header;*/
const byte receiver_addr[5] = {'R','x','A','A','A'};

Package data;

void setup()
{
  Serial.begin(9600);
  delay(1000);
  //SPI.begin();
  radio.begin();
  radio.openWritingPipe(receiver_addr);
  radio.setPALevel(RF24_PA_MIN);
  radio.setDataRate(RF24_250KBPS);
  //network.begin(/*channel*/ 110, /*node address*/ this_node);
  delay(1000);
}

void loop()
{
  //RF24NetworkHeader header_receiver(node01);
  //network.write(header_receiver, &data, sizeof(data));
  if ( radio.available()) 
  {
    while(radio.available()){
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
  }
}
