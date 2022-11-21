#ifndef PAINT_H
#define PAINT_H

#include <SDL.h>

class Paint{
    public:
        Paint();
        ~Paint();
    private:
        bool success = true;
        bool quit = false;
        void mainLoop();
        
};


#endif