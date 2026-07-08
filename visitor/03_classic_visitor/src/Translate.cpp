//---- <Translate.cpp> ----------------
#include "Translate.h"
#include "Circle.h"
#include "Square.h"

#include <iostream>

// The two implementations really want to be one function, but the visitor
// interface won't let them be. Welcome to boilerplate town.
void Translate::visit(Circle const& c) const
{
    std::cout << "[classic-visitor] Translating Circle (radius = " << c.radius() << ")\n";
}

void Translate::visit(Square const& s) const
{
    std::cout << "[classic-visitor] Translating Square (side = " << s.side() << ")\n";
}
