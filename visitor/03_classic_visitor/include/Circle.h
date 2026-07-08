//---- <Circle.h> ----------------
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"
#include "ShapeVisitor.h"

class Circle : public Shape
{
public:
    explicit Circle(double radius)
        : radius_(radius)
    {}

    void accept(ShapeVisitor const& v) const override { v.visit(*this); }

    double radius() const { return radius_; }
    Point  center() const { return center_; }

private:
    double radius_;
    Point  center_{};
};

#endif // CIRCLE_H
