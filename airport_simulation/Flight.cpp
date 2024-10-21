#include "Flight.h"

Flight ::Flight(int id, string dest,string arr, string dep): flightID(id),destination(dest),arrivalTime(arr),departureTime(dep),status("Scheduled"){}
void Flight::updateStatus(string newStatus) {
	status = newStatus;
}

void Flight::displayFlightDetails() {
	cout << "Flight ID: " << flightID << " | Destination: " << destination << " |Arrival Time: " << arrivalTime
		<< " | Departure Time " << departureTime << " | Status: " << status << endl;
}
string Flight::getStatus() {
	return status;
}
string Flight::getDepartureTime() {
	return departureTime;
}
