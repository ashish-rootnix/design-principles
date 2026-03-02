#ifndef _CAR_H
#define _CAR_H

#include <memory>
#include "Engine.h"

class Car
{
    protected:
        explicit Car(std::unique_ptr<Engine> engine) : pimpl(std::move(engine))
        {}

    public:
        virtual ~Car() = default;
        virtual void drive() = 0;

    protected:
        Engine* getEngine() {return pimpl.get();}
        const Engine* getEngine() const  {return pimpl.get();}

    private:
        std::unique_ptr<Engine> pimpl; // Pointer to implementation
    // ... more car-specific data members (wheels, drivetrain, ...)
};

#endif
