
#include "Car.h"
#include "ElectricCar.h"
#include "CombutionEngine.h"

int main()
{
    ElectricCar ecar(std::make_unique<ElectricEngine>());
    ecar.drive();

    std::unique_ptr<Car> ecar2 = std::make_unique<ElectricCar>(std::make_unique<CombutionEngine>());
    ecar2->drive();
}