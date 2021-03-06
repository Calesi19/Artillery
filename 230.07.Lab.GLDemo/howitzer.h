/***********************************************************************
 * Header File:
 *    Howitzer : The representation of the howtizer, it's position, and ability to fire
 * Author:
 *    Braxton Meyer and Carlos Lespin-Silva
 * Summary:
 *    Everything we need to know about the Howitzer
 ************************************************************************/


#include "position.h"

#pragma once
class TestHowitzer;

class Howitzer {


public:
	friend TestHowitzer;

	Howitzer() {
		point.setPixelsX(700 / 2.0);
		point.setPixelsY(500);
		angle = 0;
		canFire = true;
	}

	void toggleCanFire();

	//Projectile projectile();

	// Getters

	Position& getPosition() { return point; }

	double getAngle()           const { return this->angle; }

	double getXPosition()       const { return point.getMetersX(); }

	double getYPosition()       const { return point.getMetersY(); }

	// Setters
	void setAngle(double newAngle) { angle = newAngle; }

	void setXPosition(double xMeters) { point.setMetersX(xMeters); }

	void setYPosition(double yMeters) { point.setMetersY(yMeters); }


	bool canFire = true;
	double angle = 0;
	Position point;


private:
	


	
	


};