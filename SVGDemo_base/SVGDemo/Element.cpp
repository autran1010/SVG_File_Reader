#include "Element.h"

/*
Color Element::apply(string value) {
    if (value.rfind("rgb", 0) == 0) { // bắt đầu bằng "rgb"
        int rcol, gcol, bcol;
        sscanf_s(value.c_str(), "rgb(%d,%d,%d)", &rcol, &gcol, &bcol);
        return Color(255, rcol, gcol, bcol);
    }
    return Color();
}
*/

void Element::parse(string name, string value) {
    if (name == "fill") {
        //fill = apply(value);
    }
    else if (name == "stroke") {
        //stroke.color = apply(value);
    }
    else if (name == "stroke-width") {
        //stroke.width = stof(value);
    }
    else if (name == "stroke-opacity") {
        //stroke.opacity = stof(value);
    }
    else if (name == "fill-opacity") {
        //fill_opacity = stof(value);
    }
}