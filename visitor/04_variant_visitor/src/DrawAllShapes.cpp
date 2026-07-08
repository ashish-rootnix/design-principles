//---- <DrawAllShapes.cpp> ----------------
#include "DrawAllShapes.h"
#include "Draw.h"

#include <variant>

void drawAllShapes(Shapes const& shapes)
{
    for (auto const& shape : shapes)
    {
        std::visit(Draw{}, shape);
    }
}
