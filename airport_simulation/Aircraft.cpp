#include "Aircraft.h"

Aircraft::Aircraft(int id,string model):aircraftID(id),model(model),status("Ready"){}

void Aircraft::land() {
	status = "Landed";
	cout << "Aircraft " << model << " has landed." << endl;
}
void Aircraft::takeoff() {
	status = "In Air";
	cout << "Aircraft " << model << " has taken off." << endl;
}
void Aircraft::refuel() {
	status = "Refueling";
	cout << "Aircraft " << model << " is refueling." << endl;

}
void Aircraft::maintain() {
	status = "In Maintenance";
	cout << "Aircraft " << model << " is in maintenance." << endl;
}
void Aircraft::displayAircraftStatus() {
	cout << "Aircraft ID: " << aircraftID << " | Model: " << model << " | Status: " << status << endl;
}
