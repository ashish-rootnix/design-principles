#ifndef ELECTRIC_CAR_H
#define ELECTRIC_CAR_H

#include <iostream>
#include "Car.h"
#include "ElectricEngine.h"

class ElectricCar : public Car
{
 public:
   ElectricCar():Car(std::make_unique<ElectricEngine>())
   {}

   void drive() override
   {
        this->getEngine()->start();
        std::cout << "Driving a Electric Car !!!" << std::endl;
        this->getEngine()->stop();        
   }
   // ...

 private:
   // ...
};

#endif