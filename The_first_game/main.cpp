#include "game.h"

int main(int argc, char *argv[])
{
    SDL_Window* window = initSDL(SCREEN_WIDTH, SCREEN_HEIGHT);
    SDL_Renderer* renderer = createRenderer(window);

    SDL_Texture* background = loadTexture("Start.png", renderer);
    SDL_RenderCopy( renderer, background, NULL, NULL);

    SDL_RenderPresent( renderer );
    waitUntilKeyPressed();

    SDL_DestroyTexture( background );
    background = NULL;

    SDL_Texture* stage1 = loadTexture("Mondstat _ Genshin Impact.jfif", renderer);
    SDL_RenderCopy( renderer, stage1, NULL, NULL);

    SDL_RenderPresent( renderer );
    waitUntilKeyPressed();

    SDL_DestroyTexture( stage1 );
    stage1 = NULL;

    SDL_Texture* stage2 = loadTexture("hsr.jpg", renderer);
    SDL_RenderCopy( renderer, stage2, NULL, NULL);

    SDL_RenderPresent( renderer );
    waitUntilKeyPressed();

    SDL_DestroyTexture( stage2 );
    stage2 = NULL;

    quitSDL(window, renderer);
    return 0;
}

