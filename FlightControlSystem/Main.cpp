/*
* Main.cpp
* Version information v0.1
* Author: Matthew Webster b00714308
*/

#include <iostream>
#include <string>
#include <vector>
#include "FlightSystem.h"

using namespace std;

int main() {
	FlightSystem aircraft1;
	int answer;
	do {
		std::cout << "Please Choose what you would like to do" << endl;
		std::cout << "1: Add an aircraft to the system" << endl;
		std::cout << "2. List all aircrafts on the system" << endl;
		std::cout << "3. Remove an aircraft from the system" << endl;
		std::cout << "4. Change heading of an aircraft in the system" << endl;
		std::cout << "5. Change altitude of an aircraft in the system" << endl;		

		std::string flightNumber_;
		std::string airline_;
		std::string aircraftType_;
		std::string gridReference_;
		int groundspeed_;
		int altitude_;
		int heading_;		


		int i;
		std::cin >> i;
		switch (i) {
		case 1:
		{
			std::cout << "Add an aircraft to the system\n" << endl;
			std::cout << "Please Enter Flight Number" << endl;
			std::cin >> flightNumber_;
			std::cout << "\nPlease enter airline" << endl;
			std::cin >> airline_;
			std::cout << "\nPlease enter gridReference" << endl;
			std::cin >> gridReference_;
			std::cout << "\nPlease enter groundspeed" << endl;
			std::cin >> groundspeed_;
			std::cout << "\nPlease enter altitude" << endl;
			std::cin >> altitude_;
			std::cout << "\nPlease enter heading" << endl;
			std::cin >> heading_;
		}
		break;

		case 2:
		{
			std::cout << "Flight Number\t\tAirline\t\tGrid Reference\t\tGround Speed\t\tAltitude\t\tHeading\n" << endl;
			std::vector<Aircraft>temporary;
			temporary = aircraft1.ListAllAircraft();
			for (int i = 0; i < temporary.size(); i++) {								
				std::cout << temporary[i].GetFlightNumber() 
				<< "\t\t" << temporary[i].GetAirline() 
				<< "\t\t" << temporary[i].GetGridReference()
				<< "\t\t" << temporary[i].GetGroundSpeed() 
				<< "\t\t" << temporary[i].GetAltitude() 
				<< "\t\t\n" << temporary[i].GetHeading();														 
			}

		}
		break;
		{
		case 3: std:cout << "Remove an aircraft from the system\n" << endl;

		}
		break;
		{
		case 4: std::cout << "Change heading of an aircraft in the system\n" << endl;
			
		}
		break;
		{
		case 5: std::cout << "Change altitude of an aircraft in the system\n" << endl;

		}		
		}
		std::cout << "Would you like to go back to the menu? Type Y to enter more options or N to exit";
		cin >> answer;
	} while (answer != 'y');
	return 0;
}