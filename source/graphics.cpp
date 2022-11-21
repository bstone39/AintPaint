#include "../headers/graphics.h"

#include <SDL.h>
#include <stdio.h>

//Screen dimensions
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

Graphics::Graphics(){
    window = NULL;
    renderer = NULL;

    window = SDL_CreateWindow("AintPaint",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if(window==NULL){
        printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
        success = false;
    }
    else{
        renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
        if(renderer == NULL){
            printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
            success = false;
        }
        else{
            SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        }
    }
}

Graphics::~Graphics(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    window = NULL;
    renderer = NULL;
}