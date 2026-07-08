//---- <Draw.h> ----------------
#ifndef DRAW_H
#define DRAW_H

#include "ShapeVisitor.h"

class Draw : public ShapeVisitor
{
public:
    void visit(Circle const& c) const override;
    void visit(Square const& s) const override;
};

#endif // DRAW_H
