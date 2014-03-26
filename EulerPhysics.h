//
//  EulerPhysics.h
//
//	See main.cpp file header for credits
//

#ifndef __HelicopterProject__EulerPhysics__
#define __HelicopterProject__EulerPhysics__

#include "Motion.h"
#include <cmath>
#include <osg/Vec3f>

class EulerPhysics : public Motion {
public:
	
	EulerPhysics(osg::Vec3f initialPosition);
	
	/*
	 it calculates the position at specific time
	 */
	osg::Vec3f calculate_position_at(double dt);

private:
	float calculatePosition(float x0, float v0, float a, float t);
	float calculateVelocity(float v0, float a, float t);
};

#endif /* defined(__HelicopterProject__EulerPhysics__) */
