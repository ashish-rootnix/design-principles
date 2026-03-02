#ifndef _ELECTRIC_COMPATIBLE_ENGINE_H
#define _ELECTRIC_COMPATIBLE_ENGINE_H

#include "RechargableEngine.h"
#include "Engine.h"

class ElectricCompatableEngine : public Engine, public RechargableEngine
{
    // No methods its type contract
    public:
        virtual ~ElectricCompatableEngine() = default;
};
#endif