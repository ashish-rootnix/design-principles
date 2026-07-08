//---- <Draw.cpp> ----------------
#include "Draw.h"
#include "Circle.h"
#include "Square.h"

#include <iostream>

void Draw::visit(Circle const& c) const
{
    std::cout << "[classic-visitor] Drawing Circle (radius = " << c.radius() << ")\n";
}

void Draw::visit(Square const& s) const
{
    std::cout << "[classic-visitor] Drawing Square (side = " << s.side() << ")\n";
}
