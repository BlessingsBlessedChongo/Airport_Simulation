#include "Flight.h"
#include "Passenger.h"
#include "Aircraft.h"
#include "AirportOperations.h"
#include "RandomEvents.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<thread> //For sleep
#include<chrono> //For time handling
using namespace std;
//function to automatically schedule flights
void autoScheduleFlights(vector<Flight>& flights, int& flightCounter) {
	flightCounter++;
	string destinations[] = { "New York", "Los Angeles", "Chicago","Miami","Dallas" };
	int randomDestination = rand() % 5;
	string depTime = to_string(13 + rand() % 10) + ":00"; //random departure time
	string arrTime = to_string(15 + rand() % 10) + ":30"; //random arrival time

	flights.push_back(Flight(flightCounter, destinations[randomDestination], arrTime, depTime));
	cout << "Flight to " << destinations[randomDestination] << " has been scheduled. \n";
}
//Function to automatically perform aircraft operations
void autoAircraftOperations(vector<Aircraft>& aircrafts, AirportOperations& ops) {
	for (Aircraft& aircraft : aircrafts) {
		aircraft.land();
		ops.cleanAircraft(aircraft.getAircraftID());
		aircraft.refuel();
		aircraft.takeoff();
	}
}
//Function to automatically handle random events
void autoRandomEvents(vector<Flight>& flights, RandomEvents& events) {
	if (!flights.empty()) {
		int randomIndex = rand() % flights.size();
		int randomEvent = rand() % 2; //0 for delay, 1 for cancellation
		if (randomEvent == 0) {
			events.triggerDelay(flights[randomIndex]);
		}
		else {
			events.triggerCancellation(flights[randomIndex]);
		}
		flights[randomIndex].displayFlightDetails();
	}
}
int main() {
	srand(time(0));
	//store flights,passengers and aircraft
	vector<Flight>flights;
	vector<Passenger>passengers;
	vector<Aircraft>aircrafts;

	AirportOperations ops;
	RandomEvents events;

	int flightCounter = 100;

	//Input passengers
	int numPassengers;
	cout << "Enter the number of passengers: ";
	cin >> numPassengers;

	for (int i = 0; i < numPassengers; i++) {
		string name;
		cout << "Enter Passenger" <<i+1<<" name: ";
		cin>>name;
		passengers.push_back(Passenger(i + 1, name));
		passengers[i].CheckIn(); //automatically check in passengers.
	}

	int numAircrafts;
	cout << "Enter the number of aircraft: ";
	cin >> numAircrafts;

	for (int i = 0; i < numAircrafts; i++) {
		string model;
		cout << "Enter Aircraft" << i + 1 << " model: ";
		cin>>model;
		aircrafts.push_back(Aircraft(i + 1, model));
		

	}
	int randomIndex = rand() % aircrafts.size() +1;
	//infinitely loop to simulate airport operations
	while (true) {
		//Schedule a new flight
		autoScheduleFlights(flights, flightCounter);
		
		//Perform aircraft operations
		autoAircraftOperations(aircrafts, ops);

		//Handle random events.
		autoRandomEvents(flights, events);

		//Simulate time passage(sleep for 5 seconds before next cycle)
		this_thread::sleep_for(chrono::seconds(5));

		cout << "\n--- End of cycle, updating simulation ---\n" << endl;
	}
	return 0;
}
