//---- <Shape.h> ----------------
// Object-oriented approach: adding new *types* is easy (just derive a new class).
// Adding new *operations* means touching this base class — that is the trade-off.

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    Shape() = default;
    virtual ~Shape() = default;

    virtual void draw() const = 0;
};

#endif // SHAPE_H
