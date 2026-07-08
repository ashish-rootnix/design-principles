//---- <Translate.h> ----------------
// Because there is no visitor base class dictating one function per type,
// operator() can be a single template. This kills the boilerplate that
// bites you in the classic Visitor.

#ifndef TRANSLATE_H
#define TRANSLATE_H

#include <iostream>

#include "Point.h"

struct Translate
{
    Point offset{};

    template <typename ShapeT>
    void operator()(ShapeT const& /*shape*/) const
    {
        std::cout << "[variant] Translating by (" << offset.x
                  << ", " << offset.y << ")\n";
    }
};

#endif // TRANSLATE_H
