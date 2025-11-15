#include "Point.h"
#include "Stroke.h"
#ifndef ELEMENT_H_
#define	ELEMENT_H_

class Element {
public:
	// Color fill;
	Stroke stroke;
	void parse(string, string);
	virtual void parseAttributes(xml_node<>* node) = 0;
};

#endif

