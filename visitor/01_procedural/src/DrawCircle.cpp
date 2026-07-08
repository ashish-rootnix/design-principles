//---- <DrawCircle.cpp> ----------------
#include "DrawCircle.h"
#include "Circle.h"

#include <iostream>

// Stand-in for a real graphics-library call.
void draw(Circle const& c)
{
    std::cout << "[procedural] Drawing Circle (radius = " << c.radius() << ")\n";
}
