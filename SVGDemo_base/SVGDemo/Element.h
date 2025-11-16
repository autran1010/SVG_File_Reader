#include "rapidxml.hpp"
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include "Point.h"
#include "Stroke.h"

using namespace std;
using namespace rapidxml;

#ifndef ELEMENT_H_
#define	ELEMENT_H_

class Element {
public:
	virtual ~Element() = default;
	// Color fill;
	Stroke stroke;
	void parse(string, string);
	virtual void parseAttributes(xml_node<>*) = 0;
};

#endif

