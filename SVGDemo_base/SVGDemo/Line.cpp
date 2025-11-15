#include "stdafx.h"

#include "Line.h"

void Line::parseAttributes(xml_node<>* node) {
    /*
    for (xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
        string name = attr->name();
        string value = attr->value();
        if (name == "x1") point1.X = stof(value);
        else if (name == "y1") point1.Y = stof(value);
        else if (name == "x2") point2.X = stof(value);
        else if (name == "y2") point2.Y = stof(value);
        else {
            parse(name, value);
        }
    }
    */
}
