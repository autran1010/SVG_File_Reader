#include "stdafx.h"

void Circle::parseAttributes(xml_node<>* node) {
    for (xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
        string name = attr->name();
        string value = attr->value();
        if (name == "cx") center.X = stof(value);
        else if (name == "cy") center.Y = stof(value);
        else if (name == "r") radius = stof(value);
        else {
            parse(name, value);
        }
    }
}
