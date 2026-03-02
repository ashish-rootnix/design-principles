#ifndef _REFUELABLE_ENGINE_H
#define _REFUELABLE_ENGINE_H

#include "Engine.h"
/*
    As Only Engine() class leads to ISP violation
    such recharge() and refuel() calls are forced to either combutionEngine is forced to recharge()
    or elctricEngine is forced to refuel() implementation
*/
//class RefuelableEngine :  public Engine  --> with this LSK is not resolved 
class RefuelableEngine
{
    public:
        virtual void refuel() = 0;
        virtual int getFuelLevel() = 0;
        virtual ~RefuelableEngine() = default;        
};

#endif