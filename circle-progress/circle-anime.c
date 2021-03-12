#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <curses.h>
#include "functions/ci-anime.h"
int main(int argc, char *argv[]){

	SDL_Window *win = NULL;
	SDL_Renderer *renderer = NULL;

	int posX = 700, posY = 300, width = 400, height = 300;
	float Bx, By, deg = -90, mouseX = 0, mouseY = 0, div_larg, div_alt; 
	int activePlay = 0;
	int loadSinuca = 0;

	SDL_Init(SDL_INIT_VIDEO);

	win = SDL_CreateWindow("Circle rotation by Ser3n0s group", posX, posY, width, height, 0);

	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
        SDL_ShowCursor(SDL_DISABLE);

	Uint32 windowID = SDL_GetWindowID(win);
        int SDL_CaptureMouse(SDL_bool enabled);

        SDL_Event event;

        const char* SDL_GetKeyName(SDL_Keycode key);

    while (true){

        SDL_RenderClear(renderer);
	SDL_Surface *image_b = IMG_Load("bg.png");

        SDL_Texture *texture_b = SDL_CreateTextureFromSurface(renderer, image_b);
        SDL_FreeSurface(image_b);

        SDL_Rect image_b_rect;
        image_b_rect.w = 400;
        image_b_rect.h = 300;
        image_b_rect.x = 0;
        image_b_rect.y = 0;
        SDL_RenderCopy(renderer, texture_b, NULL, &image_b_rect);
        SDL_DestroyTexture(texture_b);

	while (SDL_PollEvent(&event) != 0){

	switch (event.type){

		case SDL_KEYDOWN:

		       if(event.key.keysym.sym == SDLK_q){

			    printf("Q Key %s = quit", SDL_GetKeyName(event.key.keysym.sym));

			    printf("\nCIRCLE ROTATION END\n");
			    
			    SDL_DestroyWindow(win);
			    SDL_Quit();
			    
			    return 0;

			}
			
    		    break;
    		}	
	}
	
	circle_rot(renderer); //rotation function
	
	SDL_RenderPresent(renderer);
        
	}


    return 0;
	SDL_DestroyWindow(win);
	SDL_Quit();

}
