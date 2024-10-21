#include "Passenger.h"

Passenger::Passenger(int id,string name): passengerID(id),name(name),checkedIn(false),boarded(false){}

void Passenger::CheckIn() {
	checkedIn = true;
	cout << name << " has checked in," << endl;
}
void Passenger::boardFlight() {
	if (checkedIn) {
		boarded = true;
		cout << name << " has boarded the flight." << endl;
	}
	else {
		cout << name << " cannot board without check-in." << endl;
	}
}
void Passenger::displayPassengerStatus() {
	cout << "Passenger: " << name << " | Checked In: " << (checkedIn ? "Yes" : "No")
		<< " | Boarded: " << (boarded ? "Yes" : "No") << endl;
}
