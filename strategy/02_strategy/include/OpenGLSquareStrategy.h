#ifndef OPENGL_SQUARE_H
#define OPENGL_SQUARE_H

#include <iostream>
#include "Square.h"
#include "DrawStrategy.h"

class OpenGLSquareStrategy : public DrawStrategy<Square>
{
 public:
   explicit OpenGLSquareStrategy()
   {}

   void draw(Square const& square) const override
   {
      std::cout << "OpenGLSquareStrategy drawing\n";
   }
};

#endif
