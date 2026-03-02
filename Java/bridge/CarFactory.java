package bridge;

public class CarFactory 
{
    public static Car createElectricCar()
    {
        return new ElectricCar(new ElectricEngine());
    }

    public static Car createCombutionCar()
    {
        return new CombutionCar(new CombutionEngine());
    }    
}
