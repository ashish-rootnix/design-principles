//---- <Draw.h> ----------------
// A "visitor" here is just a callable with one operator() per alternative.
// No base class, no virtual functions, no accept(). Zero coupling to a
// framework — anyone can add a new operation without touching Shape.

#ifndef DRAW_H
#define DRAW_H

#include <iostream>

#include "Circle.h"
#include "Square.h"

struct Draw
{
    void operator()(Circle const& c) const
    {
        std::cout << "[variant] Drawing Circle (radius = " << c.radius() << ")\n";
    }

    void operator()(Square const& s) const
    {
        std::cout << "[variant] Drawing Square (side = " << s.side() << ")\n";
    }
};

#endif // DRAW_H
