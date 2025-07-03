#include "main.h"

int main(){
    //Intilaising SDL Window
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window * window = SDL_CreateWindow("Vasuki System Monitor", 
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
        WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    EVENT = malloc(sizeof(SDL_Event));


    //Aletring propertise
    SDL_SetWindowResizable(window, SDL_TRUE); 
    //Main Loop
    while (PROGRAM_IS_RUNNING)
    {
        
        while (SDL_PollEvent(EVENT))
        {
            process_to_check_each_frame(EVENT);
            if(EVENT->type == SDL_QUIT){
                PROGRAM_IS_RUNNING = SDL_FALSE;
            }
        }
        SDL_SetRenderDrawColor(renderer, 25, 25, 25, SDL_ALPHA_OPAQUE);
        SDL_RenderClear(renderer);
        //filledCircleRGBA(renderer, WINDOW_WIDTH/2, WINDOW_HEIGHT/2, 120, 50, 50, 50, 255);
        SDL_RenderPresent(renderer);
        SDL_Delay(16);
        
    }
    


    //End Program
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    

    return 0;
}