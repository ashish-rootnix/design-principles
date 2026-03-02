#ifndef _CAR_FACTORY_H
#define _CAR_FACTORY_H

#include "Car.h"
#include "ElectricCar.h"
#include "CombutionCar.h"
#include <memory>

class CarFactory
{
    public:
        static std::unique_ptr<Car> createElectricCar()
        {
            return std::make_unique<ElectricCar>(std::make_unique<ElectricEngine>());
        }

        static std::unique_ptr<Car> createCombutionCar()
        {
            return std::make_unique<CombutionCar>(std::make_unique<CombutionEngine>());
        }
        
        static std::unique_ptr<Car>  createCarWithEngine(std::unique_ptr<Engine>engine)
        {
            return std::make_unique<ElectricCar>(std::move(engine));
        }
};

#endif
