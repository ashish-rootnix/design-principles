package bridge;

// To fix LSP violation from main application, this interface is introduced
public interface ElectricCapable extends Engine
{
    // Marker only - only electric engines can implement this
    void recharge();
    int getBatteryLevel();
}
