#ifndef PASSENGER_H
#define PASSENGER_H

#include<iostream>
#include<string>
using namespace std;

class Passenger {
private:
	int passengerID;
	string name;
	bool checkedIn;
	bool boarded;
public:
	Passenger(int id, string name);
	void CheckIn();
	void boardFlight();
	void displayPassengerStatus();
};
#endif //PASSENGER_H