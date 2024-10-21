#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include<iostream>
#include<string>

using namespace std;

class Aircraft {
private:
	int aircraftID;
	string model;
	string status; // Ready, Refueling, In Maintenance

public:
	Aircraft(int id, string model);
	void land();
	void takeoff();
	void refuel();
	void maintain();
	void displayAircraftStatus();
	int getAircraftID() {
		return aircraftID;
	}
};
#endif //AIRCRAFT_H