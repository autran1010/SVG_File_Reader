#include "Common.h"

#ifndef LINE_H_
#define LINE_H_

class Line : public Element {
	PointF point1, point2;
	void parseAttributes(xml_node<>* node) override;
};

#endif