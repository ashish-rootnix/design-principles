//---- <DrawAllShapes.cpp> ----------------
#include "DrawAllShapes.h"
#include "Circle.h"
#include "Square.h"
#include "DrawCircle.h"
#include "DrawSquare.h"

// PAIN POINT: adding a new shape means touching every switch like this one
// across the code base. That is the "type-based programming" trap Meyers warned
// about: it produces unmaintainable code.
void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (auto const& shape : shapes)
    {
        switch (shape->getType())
        {
        case circle:
            draw(static_cast<Circle const&>(*shape));
            break;
        case square:
            draw(static_cast<Square const&>(*shape));
            break;
        }
    }
}
