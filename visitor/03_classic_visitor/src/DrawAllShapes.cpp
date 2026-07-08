//---- <DrawAllShapes.cpp> ----------------
#include "DrawAllShapes.h"
#include "Shape.h"
#include "Draw.h"

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    Draw const drawVisitor{};
    for (auto const& shape : shapes)
    {
        shape->accept(drawVisitor);
    }
}
