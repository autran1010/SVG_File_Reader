#include "stdafx.h"
#ifndef CIRCLE_H_
#define CIRCLE_H_
#pragma comment (lib, "Gdiplus.lib")

using namespace Gdiplus;

class Circle {
public:
    float cx, cy, r;
    Color color;

    Circle(float _cx, float _cy, float _r, Color _color);
    void Draw(Graphics& graphics) const;
};
#endif CIRCLE_H_
