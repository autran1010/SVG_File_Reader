#include "Element.h"

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle : public Element {
public:
    Point center;
    float radius;
    Circle() : center(0, 0), radius(0) {}
    ~Circle() override = default;
    void parseAttributes(xml_node<>*) override;
};
#endif
