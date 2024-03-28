#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
using namespace std;

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;

void logErrorAndExit(const char* msg, const char* error);
SDL_Window* initSDL(int SCREEN_WIDTH, int SCREEN_HEIGHT);
SDL_Renderer* createRenderer(SDL_Window* window);
void quitSDL(SDL_Window* window, SDL_Renderer* renderer);
void waitUntilKeyPressed();
void renderTexture(SDL_Texture *texture, int x, int y, SDL_Renderer* renderer);
SDL_Texture *loadTexture(const char *filename, SDL_Renderer* renderer);

