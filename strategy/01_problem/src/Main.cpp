#include "../include/OpenGLCircle.h"
#include "../include/OpenGLSquare.h"
#include "../include/DrawAllShapes.h"
#include <cstdlib>
#include <memory>
#include <vector>

int main()
{
   using Shapes = std::vector< std::unique_ptr<Shape> >;

   Shapes shapes{};

   // Creating some shapes
   shapes.emplace_back( std::make_unique<OpenGLCircle>( 2.3 ) );
   shapes.emplace_back( std::make_unique<OpenGLSquare>( 1.2 ) );
   shapes.emplace_back( std::make_unique<OpenGLCircle>( 4.1 ) );

   // Drawing all shapes
   drawAllShapes( shapes );

   return EXIT_SUCCESS;
}

/*
Whenever there is need to add new operation, Shape class needs to modify with pure virtual operation function.
It needs all recompilation all the time.
Also new operation needs new class to for that operation for all types.

To add different drawing mechanism, needs to add hierarcchy to draw function for resepctive shape.
Each shape type needs separate draw class with different technique or strategy

This approach is only increasing hierarcgy tree
*/