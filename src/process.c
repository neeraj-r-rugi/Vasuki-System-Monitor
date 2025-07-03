#include "process.h"

void process_to_check_each_frame(SDL_Event * event){
    if(event->type == SDL_WINDOWEVENT){
        if(event->window.event == SDL_WINDOWEVENT_RESIZED){
            WINDOW_HEIGHT = event->window.data2;
            WINDOW_WIDTH = event->window.data1;
        }
    }
}