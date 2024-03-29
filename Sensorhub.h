#ifndef Sensorhub_h
#define Sensorhub_h

#include "Arduino.h"


class Sensor
{
	public:
		Sensor(const uint32_t uuid, const uint32_t dataLength){
			_uuid = uuid;
			_dataLength = dataLength; //length of raw data
		}
		void getSensor(){
			Serial.print("Sensor UUID: ");
			Serial.println(_uuid);
		};
		void getEvent(){
			startEvent();
			getEventRaw();
			parseEvent();		
		};
		uint8_t getSize() { return _dataLength; }
		byte* raw;
	protected:
		virtual void startEvent();
		virtual void getEventRaw();
		virtual void parseEvent();
	private:
		uint32_t _uuid;
		uint8_t _dataLength;
};

#define UUID 0xDEADBEEF
#define LENGTH_OF_DATA 4

class TemperatureSensor: public Sensor
{
	public:
		TemperatureSensor():Sensor(UUID, LENGTH_OF_DATA){
			//give sensor base the pointer to our data array
			raw = &rawData[0]; 
		}
		void startEvent(){}
		void getEventRaw(){
			//just populating with dummy data
			for(int i=0; i<LENGTH_OF_DATA; i++){
				rawData[i]=LENGTH_OF_DATA-i;		
			}
		}
		void parseEvent(){}
		byte rawData[LENGTH_OF_DATA];
};

#endif


