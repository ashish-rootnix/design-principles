package bridge;
public class Main {
    public static void main(String[] args)
    {
        // Caller control the engine - true bridge pattern
        ElectricCar ecar = new ElectricCar(new ElectricEngine());
        ecar.drive();

        System.out.println("---");

        // Sweap engine without changing Electric Car at all
        Car ecar2 = new ElectricCar(new CombutionEngine());
        ecar2.drive();

        System.out.println("---");

    }
}
