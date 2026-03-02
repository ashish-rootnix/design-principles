package bridge;
public class Main {
    public static void main(String[] args)
    {
        // Caller control the engine - true bridge pattern
        ElectricCar ecar = new ElectricCar(new ElectricEngine());
        ecar.drive();

        System.out.println("---");

        // Sweap engine without changing Electric Car at all
        // Heare LSP is failing as Elecric car is able to inject combution engine, logically its wrong
 
        // Resolved using addition interface specific to respective engines        
        //Car ecar2 = new ElectricCar(new CombutionEngine()); // Won't compile
        Car ecar2 = new ElectricCar(new ElectricEngine());
        ecar2.drive();

        System.out.println("---");

        // Still main() knowns concrete classese - its DIP violation
        // This DIP violation is resolved using Factory class
        Car factElecCar = CarFactory.createElectricCar();
        factElecCar.drive();

        Car factCombCar = CarFactory.createCombutionCar();
        factCombCar.drive();        
    }
}
