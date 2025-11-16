#include "stdafx.h"

#include "Point.h"


Point::Point(float x_, float y_): x(x_), y(y_) {}


Point::~Point() {
	x = y = 0;
	intersect = false;
}

float Point::getX() {
	return this->x;
}

float Point::getY() {
	return this->y;
}

void Point::setX(float x) {
	this->x = x;
}

void Point::setY(float y) {
	this->y = y;
}