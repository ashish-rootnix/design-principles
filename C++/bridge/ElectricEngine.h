#ifndef _ELECTRIC_ENGINE_H
#define _ELECTRIC_ENGINE_H

#include <iostream>
#include "ElectricCompatableEngine.h"

class ElectricEngine : public ElectricCompatableEngine
{
 public:
   virtual void start() override
   {
    std::cout << "Starting Electric Engine!" << std::endl;
   }

   virtual void stop() override
   {
    std::cout << "Stopping Electric Engine!" << std::endl;
   }

   void recharge() override
   {
      std::cout << "Recharging Engine!" << std::endl;
   }

   int getBatteryLevel() override
   {
      return batteryLevel;
   }

 private:
    int batteryLevel = 0;
   // ...
};

#endif
