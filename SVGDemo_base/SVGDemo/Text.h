#include "Common.h"

#ifndef TEXT_H_
#define TEXT_H_

class Text: public Element {
	PointF position;
	string content;
	float fontsize;
	void parseAttributes(xml_node<>* node) override;
};

#endif