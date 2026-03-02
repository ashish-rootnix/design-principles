package bridge;

public interface Engine{
    void stop();
    void start();
}

/*
    If we add new interface refuel(), its ISP violation 
    as electric Engine needs to implement refuel()

    To avoid ISP violation 
    2 interfaces added that is rechargable and refueable
*/
