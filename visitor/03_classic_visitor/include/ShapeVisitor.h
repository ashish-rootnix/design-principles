//---- <ShapeVisitor.h> ----------------
// Classic (Cyclic) Visitor.
// One visit() overload per concrete shape. Adding a new shape means editing
// this base class AND every derived visitor — that is the closed-set-of-types
// restriction the pattern buys us in exchange for open operations.

#ifndef SHAPE_VISITOR_H
#define SHAPE_VISITOR_H

class Circle;
class Square;

class ShapeVisitor
{
public:
    virtual ~ShapeVisitor() = default;

    virtual void visit(Circle const&) const = 0;
    virtual void visit(Square const&) const = 0;
    // One more visit() per concrete shape you add later.
};

#endif // SHAPE_VISITOR_H
