//---- <Translate.h> ----------------
// Note: the logic to translate a Circle vs a Square is basically identical,
// but the visitor interface forces one visit() per concrete type. That is one
// of the pattern's real-world friction points.

#ifndef TRANSLATE_H
#define TRANSLATE_H

#include "ShapeVisitor.h"

class Translate : public ShapeVisitor
{
public:
    void visit(Circle const& c) const override;
    void visit(Square const& s) const override;
};

#endif // TRANSLATE_H
