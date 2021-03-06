//	See main.cpp file header for credits
//
//	created by Fares Alotaibi
//	modified by Hamad Almarri
//

#include "DelayCommand.h"


DelayCommand::DelayCommand(float seconds) {
	this->seconds = seconds;
}


bool DelayCommand::execute() {
	std::this_thread::sleep_for(std::chrono::milliseconds(int(1000 * this->seconds)));
	return true;
}