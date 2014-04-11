//	See main.cpp file header for credits


#include "StartLoggingCommand.h"


StartLoggingCommand::StartLoggingCommand(Game *game) {
	this->game = game;
}



bool StartLoggingCommand::execute() {
	this->game->logger->startLogging();
	return true;
}