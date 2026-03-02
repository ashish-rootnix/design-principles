package bridge;

public class ElectricEngine implements ElectricCapable {
    private int batteryLevel = 100;

    @Override public void start()
    {
        System.out.println("Starting Electric Engine!");
    }

    @Override public void stop()
    {
        System.out.println("Stopping Electric Engine!");
    }
    
    @Override public void recharge()
    {
        System.out.println("Charging Electric Engine!");
    }

    @Override public int  getBatteryLevel()
    {
        return batteryLevel;
    }
}
