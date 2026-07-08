//---- <Shape.h> ----------------
#ifndef SHAPE_H
#define SHAPE_H

class ShapeVisitor;

class Shape
{
public:
    virtual ~Shape() = default;

    // Every concrete Shape implements accept() the same way:
    //   v.visit(*this);
    // but because *this has a different static type in each override,
    // this triggers double dispatch onto the correct visit() overload.
    virtual void accept(ShapeVisitor const& v) const = 0;
};

#endif // SHAPE_H
