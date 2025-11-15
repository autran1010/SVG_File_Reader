#include "stdafx.h"

using namespace Gdiplus;

Circle::Circle(float _cx, float _cy, float _r, Color _color)
    : cx(_cx), cy(_cy), r(_r), color(_color) {}

void Circle::Draw(Graphics& graphics) const
{
    SolidBrush brush(color);
    graphics.FillEllipse(&brush, cx - r, cy - r, 2 * r, 2 * r);
}
