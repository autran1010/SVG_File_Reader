#include "stdafx.h"

void Text::parseAttributes(xml_node<>* node) {
    for (xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
        string name = attr->name();
        string value = attr->value();
        if (name == "x") {
            position.X = stof(value);
        }
        else if (name == "y") {
            position.Y = stof(value);
        }
        else if (name == "font-size") {
            fontsize = stof(value);
        }
        else if (name == "fill") {
            parse(name, value);
        }
    }
    if (node->value()) {
        content = node->value();
    }
}