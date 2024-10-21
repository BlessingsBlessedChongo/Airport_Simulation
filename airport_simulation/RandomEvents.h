#ifndef RANDOMEVENTS_H
#define RANDOMEVENTS_H

#include "Flight.h"

class RandomEvents {
public:
	void triggerDelay(Flight& flight);
	void triggerCancellation(Flight& flight);
	void triggerWealtherDisruption();
};
#endif // RANDOMEVENTS_H

