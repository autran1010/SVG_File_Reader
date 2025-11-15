#include "Element.h"

#ifndef LINE_H_
#define LINE_H_

class Line : public Element {
public:
	Point point1, point2;
	void parseAttributes(xml_node<>* node) override;
};

#endif