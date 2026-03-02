package bridge;
public class CombutionEngine implements CombutionCapable {
    private int fuelLevel = 100;

    @Override public void start()
    {
        System.out.println("Starting Combution Engine!");
    }

    @Override public void stop()
    {
        System.out.println("Stopping Combution Engine!");
    }
    
    @Override public void refuel()
    {
        System.out.println("Refueling Engine!");
    }
    @Override public int getFuelLevel()
    {
        return fuelLevel;
    }  
}
