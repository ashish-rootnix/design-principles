//---- <Square.h> ----------------
#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"
#include "Shape.h"
#include "ShapeVisitor.h"

class Square : public Shape
{
public:
    explicit Square(double side)
        : side_(side)
    {}

    void accept(ShapeVisitor const& v) const override { v.visit(*this); }

    double side()   const { return side_; }
    Point  center() const { return center_; }

private:
    double side_;
    Point  center_{};
};

#endif // SQUARE_H
