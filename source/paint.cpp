#include "../headers/paint.h"

#include <SDL.h>
#include <stdio.h>

#include "../headers/graphics.h"

Paint::Paint(){
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_EVENTS)<0){
        printf("SDL could not initialize! SDL_Error: %s\n",SDL_GetError());
        success=false;
    }else{
        mainLoop();
    }
}

Paint::~Paint(){
    SDL_Quit();
}

void Paint::mainLoop(){
    Graphics graphics;
    SDL_Event e;
    
    //while application is running
    while(!quit){

        //event polling
        while(SDL_PollEvent(&e)!=0){
            if(e.type == SDL_QUIT){
                quit=true;
            }
        }

    }
}