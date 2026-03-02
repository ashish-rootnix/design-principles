#ifndef _COMBUTION_ENGINE_H
#define _COMBUTION_ENGINE_H

#include <iostream>
#include "RefuelableEngine.h"
#include "Engine.h"

class CombutionEngine : public Engine, public RefuelableEngine
{
 public:
   virtual void start() override
   {
    std::cout << "Starting Combution Engine!" << std::endl;
   }

   virtual void stop() override
   {
    std::cout << "Stopping Combution Engine!" << std::endl;
   }

  virtual void refuel() override
  {
    std::cout << "Refueling Engine!" << std::endl;
  }
    
  virtual int getFuelLevel() override
  {
      return feulLevel;
  }

 private:
    int feulLevel = 0;
   // ...
};

#endif