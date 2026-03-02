#ifndef _COMBUTION_ENGINE_H
#define _COMBUTION_ENGINE_H

#include <iostream>
#include "CombutionCompatableEngine.h"

class CombutionEngine : public CombutionCompatableEngine
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