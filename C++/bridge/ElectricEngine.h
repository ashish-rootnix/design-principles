#ifndef _ELECTRIC_ENGINE_H
#define _ELECTRIC_ENGINE_H

#include <iostream>
#include "Engine.h"

class ElectricEngine : public Engine
{
 public:
   void start() override
   {
    std::cout << "Starting Electric Engine!" << std::endl;
   }

   void stop() override
   {
    std::cout << "Stopping Electric Engine!" << std::endl;
   }

 private:
   // ...
};

#endif