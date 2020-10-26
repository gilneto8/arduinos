## What to buy

- 3x Breadboard  
  - `https://www.ptrobotics.com/breadboards/833-breadboard-mini-self-adhesive-white.html` (~€9)
- 3x Arduino
  - `https://store.arduino.cc/nano-every-pack` (€22.80)
- 2x Temperature Sensor
  - `https://www.ptrobotics.com/sensores-de-temperatura/1120-tmp36-temperature-sensor.html` (~€4)
- 3x Radio Transceiver
  -  `https://www.ptrobotics.com/nordic-nrf24/2537-nrf24l01-module.html` (~€13.5)
  
Total: **~€49.4**

## Notes
  
- Average consumption for Arduino w/ sleep for 2mins  
`(10mA*.5s + 16uA*120s)/120.5s = (5 + 1.92)/120.5 = .05mA (50uA)`

- Average battery time w/ 9V battery (~450mAh)  
`450mAh/.05mA = 9000h = 375d = 1.03y!`

## Plan

- [ ] Create MVP
	- [ ] Get components
	- [ ] Mount 3 devices communicating (2 transmitters, 1 receiver)
	- [ ] Create server with database
	- [ ] Send information to database
	- [ ] Show it on Graphana
  
## References

- [NRF24L01 vs NRF24L01+](https://www.seeedstudio.com/blog/2019/11/21/nrf24l01-getting-started-arduino-guide/)
- `https://howtomechatronics.com/tutorials/arduino/arduino-wireless-communication-nrf24l01-tutorial/`
- `https://www.youtube.com/watch?v=-_XkGju35MI`
- `https://www.circuitbasics.com/arduino-thermistor-temperature-sensor-tutorial/`
- `https://create.arduino.cc/projecthub/Sanjus-Robotics-Studio/gps-location-finder-8139b4`
- `https://www.youtube.com/watch?v=azxshrFSgnA&feature=emb_title`
- `https://forum.arduino.cc/index.php?topic=386417.0`
- `https://www.digikey.com/en/maker/blogs/2019/how-to-wirelessly-transmit-data-on-arduino`
- `https://www.youtube.com/watch?v=IM3xg2Q_E3w`
- `https://makecademy.com/arduino-battery`
- `https://www.amazon.com/Parts-Express-9V-Battery-Clip/dp/B0002ZPFU8/ref=as_li_ss_tl?ie=UTF8&qid=1452883576&sr=8-1&keywords=9v+battery+snap&linkCode=sl1&tag=amandaghassae-20&linkId=bb34688b7f456730b72a60f14d7e5779`
- `https://www.seeedstudio.com/blog/2020/01/06/how-to-use-a-breadboard-wiring-circuit-and-arduino-interfacing/`
- `https://www.youtube.com/watch?v=8I4ZuWn1b_8`
- `https://learn.adafruit.com/adafruit-microphone-amplifier-breakout`
- `https://learn.adafruit.com/breadboards-for-beginners/perma-protos`
- `https://www.youtube.com/watch?v=Kgul26YkMrM`
- `https://www.youtube.com/watch?v=wSSTSGYk-m0`
- `https://create.arduino.cc/projecthub/148064/your-environmental-data-on-arduino-iot-cloud-4e29bf?ref=part&ref_id=23574&offset=3`
- `https://store.arduino.cc/environmental-monitor-bundle`
- `https://create.arduino.cc/projecthub/masteruan/arduino-mkr-fox-1200-sigfox-meteo-station-423609?ref=part&ref_id=23574&offset=10`
- `https://www.arduino.cc/en/Guide.MKRFox1200`
- `https://www.influxdata.com/blog/how-to-send-sensor-data-to-influxdb-from-an-arduino-uno/`
- `https://github.com/ofcourseican/arduinosensors`
- `https://github.com/jckuester/weather-station`
- `https://www.youtube.com/watch?v=V4kLKMJL8Hg`
- `https://www.arduino.cc/en/Reference/ArduinoLowPower`
- `https://www.arduino.cc/en/Tutorial/LowPowerExternalWakeup`
- `https://maker.pro/arduino/tutorial/how-to-reduce-arduino-power-consumption`
- `https://hwstartup.wordpress.com/2013/03/11/how-to-run-an-arduino-on-a-9v-battery-for-weeks-or-months/`
- `https://www.metricfire.com/blog/prometheus-vs-influxdb`
- `https://forum.arduino.cc/index.php?topic=261258.0`
- `https://www.youtube.com/watch?v=7rcVeFFHcFM&feature=emb_title`
- `https://www.youtube.com/watch?v=b5C9SPVlU4U`
- `https://dronebotworkshop.com/433mhz-rf-modules-arduino/`
- `https://www.youtube.com/watch?v=SmGjprCIAaY`
- `https://www.youtube.com/watch?v=VPlfaV4ocKw`
- `https://hub.packtpub.com/react-dashboard-and-visualizing-data/`
- `https://blog.carlosnunez.me/post/how-to-sre-ify-your-react-app-with-prometheus/`
- `https://jtway.co/setup-prometheus-in-amazon-ec2-via-elasticbeanstalk-and-docker-13ec426c21c0`
- `https://www.youtube.com/watch?v=JGYXk-RzNZI`
