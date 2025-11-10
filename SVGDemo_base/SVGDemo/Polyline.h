#include "Common.h"

#ifndef POLYLINE_H_
#define POLYLINE_H_

class Polyline : public Element {
public:
	vector<PointF> points;
	void parseAttributes(xml_node<>* node) override;
};

#endif
