#include "Element.h"

#ifndef TEXT_H_
#define TEXT_H_

class Text: public Element {
public:
	Point position;
	string content;
	float fontsize;
	Text() : position(0, 0), content(""), fontsize(0) {}
	~Text() override = default;
	void parseAttributes(xml_node<>*) override;
};

#endif