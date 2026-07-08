//---- <Shape.h> ----------------
// Procedural approach: type is encoded via an enum tag stored in the base class.
// Distinguishing at runtime is done with switch statements on getType().

#ifndef SHAPE_H
#define SHAPE_H

enum ShapeType
{
    circle,
    square
};

class Shape
{
protected:
    explicit Shape(ShapeType type)
        : type_(type)
    {}

public:
    virtual ~Shape() = default;

    ShapeType getType() const { return type_; }

private:
    ShapeType type_;
};

#endif // SHAPE_H
