//---- <Circle.h> ----------------
// No inheritance. No accept(). No preparation for visitors.
// This is the "nonintrusive" property of the std::variant Visitor.

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle
{
public:
    explicit Circle(double radius)
        : radius_(radius)
    {}

    double radius() const { return radius_; }
    Point  center() const { return center_; }

private:
    double radius_;
    Point  center_{};
};

#endif // CIRCLE_H
