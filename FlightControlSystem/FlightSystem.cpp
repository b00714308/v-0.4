/*
* FlightSystem.cpp
* Version information v0.1
* Author: Matthew Webster b00714308
*/
#include <iostream>
#include <string>
#include <vector>
#include "Aircraft.h"
#include "FlightSystem.h"


void FlightSystem::AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, std::string gridReference, int groundspeed, int altitude, int heading) {
	aircraftList_;
	Aircraft aircraft1(flightNumber, airline, aircraftType, gridReference, groundspeed, altitude, heading);	
	aircraftList_.push_back(aircraft1);	
	}
std::vector<Aircraft> FlightSystem::ListAllAircraft(std::string flightNumber, std::string airline, std::string aircraftType, std::string gridReference, int groundspeed, int altitude, int heading) {
	return aircraftList_;	
}
void FlightSystem::ListAllCruisingAircraft(std::string flightNumber, std::string airline, std::string aircraftType, std::string gridReference, int groundspeed, int altitude, int heading) {
	
}
void FlightSystem::RemoveAircraft(std::string flightNumber) {

}
void FlightSystem::ChangeHeading(std::string flightNumber, int heading) {

}
int FlightSystem::GetHeading(std::string flightNumber) {
	
	return 0;
}
void FlightSystem::ChangeAltitude(std::string flightNumber, int heading) {

}
int FlightSystem::GetAltitude(std::string flightNumber) {

	return 0;
}
int FlightSystem::numAircraftInSector() {
	
	return 0;
}