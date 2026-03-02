
#include "Car.h"
#include "CarFactory.h"
#include "ElectricCar.h"

int main()
{
    std::cout << " ===Via Explicit engine injection ===" << std::endl;
    ElectricCar ecar(std::make_unique<ElectricEngine>());
    ecar.drive();
    std::cout << std::endl;
    // Heare LSP is failing as Elecric car is able to inject combution engine, logically its wrong
    //Here Logical LSK is fixed due to multiple inheritance
    //std::unique_ptr<Car> ecarx = std::make_unique<ElectricCar>(std::make_unique<CombutionEngine>());
    std::unique_ptr<Car> ecar2 = std::make_unique<ElectricCar>(std::make_unique<ElectricEngine>());
    ecar2->drive();

    // Still main() knowns concrete classese - its DIP violation
    // This problem can be solved using factory method
    std::cout << "\n=== Via factory method ===" << std::endl;
    std::unique_ptr<Car> car1 = CarFactory::createElectricCar();
    car1->drive();
    std::cout << std::endl;
    std::unique_ptr<Car> car2 = CarFactory::createCombutionCar();
    car2->drive();

    std::cout << "\n=== Polymorphic array — true Bridge power ===" << std::endl;
    std::unique_ptr<Car> fleet[] = {
        CarFactory::createElectricCar(),
        CarFactory::createCombutionCar(),
        CarFactory::createElectricCarWith(std::make_unique<ElectricEngine>())
    };

    for(const auto& car : fleet)
    {
        car->drive();
        std::cout << std::endl;
    }

}