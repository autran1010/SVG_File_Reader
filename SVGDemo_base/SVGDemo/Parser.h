#include "Common.h"
#ifndef PARSER_H_
#define	PARSER_H_

class Parser {
public:
	string source;
	vector<Element*>children;
	Element* createElement(const string&);
	void loadFromFile(string);
};

#endif
