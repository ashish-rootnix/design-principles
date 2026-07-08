//---- <Shape.h> ----------------
// The abstraction "one of these shape types" is now a std::variant, not a
// base class. Callers work with a value, not a pointer. No inheritance,
// no virtual dispatch. Type-safe by construction.

#ifndef SHAPE_H
#define SHAPE_H

#include <variant>

#include "Circle.h"
#include "Square.h"

using Shape = std::variant<Circle, Square>;

#endif // SHAPE_H
