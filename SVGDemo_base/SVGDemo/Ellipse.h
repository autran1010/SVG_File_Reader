#include "Element.h"

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

class Ellipse : public Element {
public:
	Ellipse();
	Point center;
	float rx, ry;
	void parseAttributes(xml_node<>* node) override;
};

#endif // !ECLIPSE_H_

