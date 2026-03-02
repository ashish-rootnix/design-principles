#ifndef _COMBUTION_CAR_H
#define _COMBUTION_CAR_H

#include <iostream>
#include "Car.h"
#include "CombutionEngine.h"
#include "ElectricEngine.h"

class CombutionCar : public Car
{
 public:
   CombutionCar():Car(std::make_unique<CombutionEngine>())
   {}

   // This constructor added to avoid - dependendcy injection violation as in above constructor
   CombutionCar(std::unique_ptr<Engine> engine_):Car(std::move(engine_))
   {}

   void drive() override
   {
        this->getEngine()->start();
        std::cout << "Driving a Combution Car !!!" << std::endl;
        this->getEngine()->stop();        
   }
   // ...

 private:
   // ...
};
#endif

/*The Bridge pattern's whole point is that Car hierarchy and Engine hierarchy vary independently. 
Hardcoding the engine inside ElectricCar collapses that independence*/
