#ifndef _COMBUTION_COMPATIBLE_ENGINE_H
#define _COMBUTION_COMPATIBLE_ENGINE_H

#include "RefuelableEngine.h"
#include "Engine.h"

class CombutionCompatableEngine : public Engine, public RefuelableEngine
{
    // No methods its type contract
    public:
        virtual ~CombutionCompatableEngine() = default;
};
#endif