#include "Element.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle: public Element {
public:
	float width;
	float height;
	Point point;
	Rectangle() : width(0), height(0), point(0,0) {}
	~Rectangle() override = default;
	void parseAttributes(xml_node<>*) override;
};

#endif
