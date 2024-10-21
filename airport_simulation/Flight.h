#ifndef FLIGHT H
#define FLIGHT H
#include <iostream>
#include<string>

using namespace std;

class Flight {
private: int flightID;
	   string destination;
	   string arrivalTime;
	   string departureTime;
	   string status; //Schedule, Delayed, Canceled,Departed,Arrived

public:
	Flight(int id, string dest, string arr, string dep);
	void updateStatus(string newStatus);
	void displayFlightDetails();
	string getStatus();
	string getDepartureTime();
};
#endif //FLIGHT_H
