#include "Rectangle.h"

void Rectangle::parseAttributes(xml_node<>* node) {
    for (xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
        string name = attr->name();
        string value = attr->value();
        
        if (name == "x") point.x = stof(value);
        else if (name == "y") point.y = stof(value);
        else if (name == "width") width = stof(value);
        else if (name == "height") height = stof(value);
        else {
            parse(name, value);
        }
    }
}