void circle_rot(SDL_Renderer *renderer){
	
	//ROTATION CIRCLE 

        SDL_Rect image_ci_rect;
        image_ci_rect.w = 24;
        image_ci_rect.h = 24;
        image_ci_rect.x = 200;
        image_ci_rect.y = 150;
	
	for(int ci_loop = 0; ci_loop < 11; ci_loop++){ //limit rodada circlo total do efeito.
	
	         SDL_RenderClear(renderer);
		if(ci_loop == 0){
			SDL_Surface *ci_img = IMG_Load("images/sn1.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 1){
			SDL_Surface *ci_img = IMG_Load("images/sn2.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 2){
			SDL_Surface *ci_img = IMG_Load("images/sn3.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 3){
			SDL_Surface *ci_img = IMG_Load("images/sn4.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 4){
			SDL_Surface *ci_img = IMG_Load("images/sn5.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 5){
			SDL_Surface *ci_img = IMG_Load("images/sn6.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 6){
			SDL_Surface *ci_img = IMG_Load("images/sn7.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 7){
			SDL_Surface *ci_img = IMG_Load("images/sn8.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 8){
			SDL_Surface *ci_img = IMG_Load("images/sn9.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 9){
			SDL_Surface *ci_img = IMG_Load("images/sn10.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}else if(ci_loop == 10){
			SDL_Surface *ci_img = IMG_Load("images/sn11.png");
			SDL_Texture *texture_ci = SDL_CreateTextureFromSurface(renderer, ci_img);
			SDL_FreeSurface(ci_img);
			SDL_RenderCopy(renderer, texture_ci, NULL, &image_ci_rect);
        		SDL_DestroyTexture(texture_ci);
		}	
				
		SDL_RenderPresent(renderer); //update frame 
		usleep(50000); //speed in microseconds 1000000 = 0.1 seconds
		
	}

}