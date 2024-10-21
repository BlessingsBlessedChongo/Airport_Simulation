#include "AirportOperations.h"
#include<iostream>
using namespace std;

void AirportOperations::handleBaggage(int flightID) {
	cout << "Handling baggage for Flight ID: " << flightID << endl;
}
void AirportOperations::provideCatering(int flightID) {
	cout << "Providing catering for Flight ID: " << flightID << endl;
}
void AirportOperations::cleanAircraft(int aircraftID) {
	cout << "Cleaning aircraft ID: " << aircraftID << endl;
}