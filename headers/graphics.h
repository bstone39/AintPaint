#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL.h>

class Graphics{
    public:
        Graphics();
        ~Graphics();
    private:
        SDL_Window* window = NULL;
        SDL_Renderer* renderer = NULL;
        bool success = true;

};

#endif