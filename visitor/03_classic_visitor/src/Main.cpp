//---- <Main.cpp> ----------------
#include "Circle.h"
#include "Square.h"
#include "DrawAllShapes.h"
#include "Translate.h"

#include <cstdlib>
#include <memory>
#include <vector>

int main()
{
    using Shapes = std::vector<std::unique_ptr<Shape>>;

    Shapes shapes;
    shapes.emplace_back(std::make_unique<Circle>(2.3));
    shapes.emplace_back(std::make_unique<Square>(1.2));
    shapes.emplace_back(std::make_unique<Circle>(4.1));

    drawAllShapes(shapes);

    // Adding a new operation is now easy — just plug in another visitor.
    Translate const translate{};
    for (auto const& shape : shapes)
    {
        shape->accept(translate);
    }

    return EXIT_SUCCESS;
}
