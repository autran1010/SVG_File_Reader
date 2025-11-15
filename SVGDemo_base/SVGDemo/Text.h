#include "Element.h"

#ifndef TEXT_H_
#define TEXT_H_

class Text: public Element {
	Point position;
	string content;
	float fontsize;
	void parseAttributes(xml_node<>* node) override;
};

#endif