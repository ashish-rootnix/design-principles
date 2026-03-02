package bridge;

// To fix LSP violation from main application, this interface is introduced
public interface CombutionCapable extends Engine
{
    // Marker only - only combution engines can implement this
    void refuel();
    int getFuelLevel();
}
