#include "Element.h"

#ifndef LINE_H_
#define LINE_H_

class Line : public Element {
public:
	Point point1, point2;
	Line() : point1(0, 0), point2(0,0) {}
	~Line() override = default;
	void parseAttributes(xml_node<>*) override;
};

#endif