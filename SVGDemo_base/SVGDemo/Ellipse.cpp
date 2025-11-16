#include "Ellipse.h"

void Ellipse::parseAttributes(xml_node<>* node) {
    for (xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
        string name = attr->name();
        string value = attr->value();
        if (name == "cx") center.setX(stof(value));
        else if (name == "cy") center.setY = stof(value);
        else if (name == "rx") rx = stof(value);
        else if (name == "ry") ry = stof(value);
        else {
            parse(name, value);
        }
    }
}
