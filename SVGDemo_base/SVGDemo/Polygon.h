#include "Element.h"

#ifndef POLYGON_H_
#define POLYGON_H_

class Polygon : public Element {
public:
	vector<Point> points;
	void parseAttributes(xml_node<>* node) override;
};

#endif
