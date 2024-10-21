#include "RandomEvents.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void RandomEvents::triggerDelay(Flight& flight) {
	cout << "Flight delayed: " << endl;
	flight.updateStatus("Delayed");
}
void RandomEvents::triggerCancellation(Flight& flight) {
	cout << "Flight canceled: " << endl;
	flight.updateStatus("Canceled");
}
void RandomEvents::triggerWealtherDisruption() {
	cout << "Severe weather warning! Flights may be delayed." << endl;
}