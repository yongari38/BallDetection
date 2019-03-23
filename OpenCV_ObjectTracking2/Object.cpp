#include "Object.h"

Object::Object()
{
	//set values for default constructor
	setType("Object");
	setColor(Scalar(0, 0, 0));

}

Object::Object(string name) {

	setType(name);

	// light ball
	if (name == "person") {
		// use "calibration mode" to find HSV min
		// and HSV max values
		setHSVmin(Scalar(25, 10, 250));
		setHSVmax(Scalar(49, 160, 255));

		// BGR value (Blue, Green, Red):
		setColor(Scalar(0, 255, 123));
	}

	// orig ball
	//if (name == "ball") {
	//	setHSVmin(Scalar(20, 79, 61));
	//	setHSVmax(Scalar(61, 209, 255));

	//	//BGR value for ball:
	//	setColor(Scalar(0, 255, 123));
	//}
}

Object::~Object(void)
{
}

int Object::getXPos() {

	return Object::xPos;

}

void Object::setXPos(int x) {

	Object::xPos = x;

}

int Object::getYPos() {

	return Object::yPos;

}

void Object::setYPos(int y) {

	Object::yPos = y;

}

Scalar Object::getHSVmin() {

	return Object::HSVmin;

}
Scalar Object::getHSVmax() {

	return Object::HSVmax;
}

void Object::setHSVmin(Scalar min) {

	Object::HSVmin = min;
}


void Object::setHSVmax(Scalar max) {

	Object::HSVmax = max;
}
