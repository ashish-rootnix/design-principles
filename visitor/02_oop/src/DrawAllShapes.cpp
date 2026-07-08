//---- <DrawAllShapes.cpp> ----------------
#include "DrawAllShapes.h"
#include "Shape.h"

// Clean, no switch, follows OCP for new types.
// But: adding serialize() or rotate() means editing Shape and every derived class.
void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (auto const& shape : shapes)
    {
        shape->draw();
    }
}
