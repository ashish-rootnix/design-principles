
#include "Car.h"
#include "ElectricCar.h"

int main()
{
    ElectricCar ecar;
    ecar.drive();

    std::unique_ptr<Car> ecar2 = std::make_unique<ElectricCar>();
    ecar2->drive();
}