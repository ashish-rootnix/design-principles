#ifndef _RECHARGABLE_ENGINE_H
#define _RECHARGABLE_ENGINE_H

#include "Engine.h"
/*
    As Only Engine() class leads to ISP violation
    such recharge() and refuel() calls are forced to either combutionEngine is forced to recharge()
    or elctricEngine is forced to refuel() implementation
*/

//class RechargableEngine : public Engine --> with this LSK is not resolved 
class RechargableEngine
{
    public:
        virtual void recharge() = 0;
        virtual int getBatteryLevel() = 0;
        virtual ~RechargableEngine() = default;
};

#endif