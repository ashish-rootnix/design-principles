//---- <Square.h> ----------------
#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"
#include "Shape.h"

class Square : public Shape
{
public:
    explicit Square(double side)
        : Shape(square)
        , side_(side)
    {
        // Real code would validate the side here.
    }

    double side()   const { return side_; }
    Point  center() const { return center_; }

private:
    double side_;
    Point  center_{};
};

#endif // SQUARE_H
