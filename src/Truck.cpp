/*
 * Camiao.cpp
 *
 */

#include "Truck.h"

namespace std {

int Truck::cnt = 0;

Truck::Truck(double cUtil,Colors::Color cor) :
		id(cnt), cUsable(cUtil), cOccupied(0),color(cor) {
	cnt++;
}

Truck::~Truck() {
	// TODO Auto-generated destructor stub
}

double Truck::getOcupiedCapacity() const {
	return cOccupied;
}

void Truck::setOcupiedCapacity(double capacity) {
	cOccupied = capacity;
}

int Truck::getId() const {
	return id;
}

double Truck::getUsableCapacity() const {
	return cUsable;
}

Colors::Color Truck::getColor() const {
	return color;
}

void Truck::resetCnt() {
	cnt = 0;
}

} /* namespace std */
