/*
 * Contentor.cpp
 *
 */

#include "Container.h"

namespace std {

Container::Container(double capacity,Colors::Color color){
	srand(time(NULL));
	double n=rand()%100;

	this->cUsable = capacity;
	this->cOccupied = capacity*(n/100.0);
	this->color = color;
}

Container::~Container() {
	// TODO Auto-generated destructor stub
}

double Container::getOcupiedCapacity() const {
	return cOccupied;
}

void Container::setOcupiedCapacity(double cocupied) {
	cOccupied = cocupied;
}

Colors::Color Container::getColor() const {
	return color;
}

void Container::setColor(Colors::Color color) {
	this->color = color;
}

double Container::getUsableCapacity() const {
	return cUsable;
}

void Container::setUsableCapacity(double cusable) {
	cUsable = cusable;
}
} /* namespace std */
