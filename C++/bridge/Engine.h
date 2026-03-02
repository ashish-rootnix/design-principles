#ifndef _ENGINE_H
#define _ENGINE_H

class Engine
{
    public:
        virtual ~Engine() = default;
        virtual void start() = 0;
        virtual void stop() = 0;
        // ...More engine specific functions
    private:
        // ...Engine specific members
};
#endif
