//
//  Sky.h
//
//	See main.cpp file header for credits
//
//  A sky calss to represent the sky in our sceen,
//	it has only one constuctor to set the position and call the model from a file.
//


#ifndef __HelicopterProject__Sky_h__
#define __HelicopterProject__Sky_h__

#include "Model.h"

class Game;

class Sky : public Model {
public:
    Sky(Game *game);
    ~Sky();
};


#include "Game.h"
#endif
