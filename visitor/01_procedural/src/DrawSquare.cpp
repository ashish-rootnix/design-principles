//---- <DrawSquare.cpp> ----------------
#include "DrawSquare.h"
#include "Square.h"

#include <iostream>

// Stand-in for a real graphics-library call.
void draw(Square const& s)
{
    std::cout << "[procedural] Drawing Square (side = " << s.side() << ")\n";
}
