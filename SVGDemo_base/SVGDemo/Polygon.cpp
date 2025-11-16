#include "Polygon.h"

void Polygon::parseAttributes(xml_node<>* node) {
    for (xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
        string name = attr->name();
        string value = attr->value();
        if (name == "points") {
            stringstream ss(value);
            string token;
            while (getline(ss, token, ' ')) {
                if (token.empty()) continue;
                size_t commaPos = token.find(',');
                if (commaPos == string::npos) continue;
                float x = stof(token.substr(0, commaPos));
                float y = stof(token.substr(0, commaPos + 1));
                points.push_back(Point(x, y));
            }
        }
        else {
            parse(name, value);
        }
    }
}
