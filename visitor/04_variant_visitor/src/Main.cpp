//---- <Main.cpp> ----------------
#include "Shapes.h"
#include "DrawAllShapes.h"
#include "Translate.h"

#include <cstdlib>
#include <variant>

int main()
{
    Shapes shapes;
    // No make_unique. No pointers. Values, contiguous in the vector.
    shapes.emplace_back(Circle{2.3});
    shapes.emplace_back(Square{1.2});
    shapes.emplace_back(Circle{4.1});

    drawAllShapes(shapes);

    // A brand-new operation, added without touching Shape, Circle, or Square.
    Translate const translate{Point{1.0, 2.0}};
    for (auto const& shape : shapes)
    {
        std::visit(translate, shape);
    }

    return EXIT_SUCCESS;
}
