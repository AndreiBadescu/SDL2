#include "SDL2/SDL.h"
#include "headers/Defines.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    SDL_assert(SDL_Init(SDL_INIT_VIDEO) == 0);
    SDL_Window* window = SDL_CreateWindow(
        "SDL2",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        SCREEN_WIDTH, SCREEN_HEIGHT,
        SDL_WINDOW_SHOWN
    );
    SDL_assert(window);
    SDL_Surface* screenSurface = SDL_GetWindowSurface(window);
    SDL_assert(screenSurface);
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);
    while (1) {
        
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}