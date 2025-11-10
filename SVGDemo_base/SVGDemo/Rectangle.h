#include "Common.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle: public Element {
public:
	PointF point;
	float width;
	float height;
	void parseAttributes(xml_node<>* node) override;
};

#endif
