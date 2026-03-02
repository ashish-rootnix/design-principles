#ifndef _COMBUTION_ENGINE_H
#define _COMBUTION_ENGINE_H

#include <iostream>
#include "Engine.h"

class CombutionEngine : public Engine
{
 public:
   void start() override
   {
    std::cout << "Starting Combution Engine!" << std::endl;
   }

   void stop() override
   {
    std::cout << "Stopping Combution Engine!" << std::endl;
   }

 private:
   // ...
};

#endif