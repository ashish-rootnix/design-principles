package bridge;

public abstract class Car {
    // Holds reference to implementor
    private final Engine engine; // Reference cannot be reassigned

    protected Car(Engine engine_)
    {
        this.engine = engine_;
    }

    protected Engine getEngine()
    {
        return engine;
    }

    public abstract void drive();
}
