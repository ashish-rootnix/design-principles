#ifndef OPENGL_CIRCLE_H
#define OPENGL_CIRCLE_H

#include <iostream>
#include "Circle.h"
#include "DrawStrategy.h"

class OpenGLCircleStrategy : public DrawStrategy<Circle>
{
 public:
   explicit OpenGLCircleStrategy()
   {}

   void draw(Circle const& circle) const override
   {
      std::cout << "OpenGLCircleStrategy drawing\n";
   }
};

#endif
