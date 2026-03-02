package bridge;

public class ElectricCar extends Car{

    public ElectricCar()
    {
        super(new ElectricEngine()); // Hardcoded dependency //Creates dependency injection violation
        //super(engine_);
    }

    public ElectricCar(Engine engine_)
    {
        //super(new ElectricEngine()); // Hardcoded dependency //Creates dependency injection violation
        super(engine_);
    }

    @Override public void drive()
    {
        getEngine().start();
        System.out.println("Driving an Electric Car");
        getEngine().stop();
    }
}

