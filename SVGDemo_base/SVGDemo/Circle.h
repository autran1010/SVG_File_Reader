#include "Common.h"
#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle : public Element {
public:
    PointF center;
    float radius;
    void parseAttributes(xml_node<>* node) override;
};
#endif
