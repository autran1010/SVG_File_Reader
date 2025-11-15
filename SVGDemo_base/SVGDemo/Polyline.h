#include "Element.h"

#ifndef POLYLINE_H_
#define POLYLINE_H_

class Polyline : public Element {
public:
	vector<Point> points;
	void parseAttributes(xml_node<>* node) override;
};

#endif
