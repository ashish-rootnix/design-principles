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

   // This constructor added to avoid - dependendcy injection violation as in above constructor
   ElectricCar(std::unique_ptr<Engine> engine_):Car(std::move(engine_))
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

/*The Bridge pattern's whole point is that Car hierarchy and Engine hierarchy vary independently. 
Hardcoding the engine inside ElectricCar collapses that independence*/
