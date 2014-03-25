
#include "RotorNeutral.h"


RotorNeutral::RotorNeutral(Rotor *rotor) {
	this->rotor = rotor;
}



bool RotorNeutral::execute() {
	this->rotor->setNeutral();
	
	return true;
}