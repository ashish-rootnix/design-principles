//---- <Circle.h> ----------------
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
public:
    explicit Circle(double radius)
        : radius_(radius)
    {
        // Real code would validate the radius here.
    }

    double radius() const { return radius_; }
    Point  center() const { return center_; }

    void draw() const override;

private:
    double radius_;
    Point  center_{};
};

#endif // CIRCLE_H
