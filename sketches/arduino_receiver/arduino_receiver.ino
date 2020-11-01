//#include <RF24Network.h>
#include <RF24.h>
#include <SPI.h>

RF24 radio (7, 8);
struct package
{
  int id=0;
  float temperature = 0.0;
  char  text[100] ="empty";
};
typedef struct package Package;

/*RF24Network network(radio);      // Network uses that radio
const uint16_t this_node = 01;    // Address of our node in Octal format ( 04,031, etc)
const uint16_t base = 00;   // Address of the other node in Octal format
RF24NetworkHeader header;*/
const byte addr[5] = {'R','x','A','A','A'};

Package data;

void setup() {
  Serial.begin(9600);
  delay(1000);
  //SPI.begin();
  radio.begin();
  radio.openReadingPipe(1, addr);
  radio.setPALevel(RF24_PA_MIN);
  radio.setDataRate(RF24_250KBPS);
  radio.startListening();
  //network.begin(/*channel*/ 110, /*node address*/ this_node);
  delay(1000);
}

void loop() {
  //network.update();
  //RF24NetworkHeader header_sender(base);
  if ( radio.available()) 
  {
    while(radio.available()){
      //network.read(header, &data, sizeof(data) );
      radio.read(&data, sizeof(data) );
      Serial.print("\nPackage:");
      Serial.print(data.id);
      Serial.print("\n");
      Serial.print("Data:");
      Serial.println(data.temperature);
      Serial.println(data.text);
    }
  }
}
