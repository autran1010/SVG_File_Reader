#include "Element.h"

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

class Ellipse : public Element {
public:
	Point center;
	float rx, ry;
	Ellipse() : center(0, 0), rx(0), ry(0) {}
	~Ellipse() override = default;
	void parseAttributes(xml_node<>*) override;
	void draw();
};

#endif

