#include "Arduino.h"
#include "Sensorhub.h"
/*
Sensor::Sensor(const uint32_t uuid, const uint32_t dataLength){
	_uuid = uuid;
	_dataLength = dataLength; //length of raw data
}

void Sensor::getSensor(){
	Serial.print("UUID: ");
	Serial.println(_uuid);
}

void Sensor::getEvent(){
	startEvent();
	getEventRaw();
	parseEvent();
}

uint8_t Sensor::getSize(){
	return _dataLength;
}
*/
/*
TemperatureSensor::TemperatureSensor():Sensor(0x32323232,4){
	raw = &rawData[0];
}

void TemperatureSensor::startEvent(){
	//code to launch conversions (or just dummy function but it must be implemented)
}

void TemperatureSensor::getEventRaw(){
	rawData[0]=4;
	rawData[1]=3;
	rawData[2]=2;
	rawData[3]=1;
}

void TemperatureSensor::parseEvent(){

}*/
