#include "Common.h"

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

class Ellipse : public Element {
	PointF center;
	float rx, ry;
	void parseAttributes(xml_node<>* node) override;
};

#endif // !ECLIPSE_H_

