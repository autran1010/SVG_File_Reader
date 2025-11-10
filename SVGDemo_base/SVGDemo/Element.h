#include "Common.h"
#ifndef ELEMENT_H_
#define	ELEMENT_H_

class Element {
public:
	float fill_opacity;
	Color fill;
	Stroke stroke;
	Element();
	void parse(string, string);
	virtual void parseAttributes(xml_node<>* node) = 0;
	Color apply(string);
};

#endif

