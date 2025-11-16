#include "Circle.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Polygon.h"
#include "Polyline.h"
#include "Line.h"
#include "Text.h"
#include "Element.h"

using namespace std;
using namespace rapidxml;

#ifndef PARSER_H_
#define	PARSER_H_

class Parser {
public:
	string source;
	vector<Element*>children;
	Parser();
	~Parser();
	Element* createElement(const string&);
	void loadFromFile(const string);
	const vector<Element*>& getChildren();
};

#endif
