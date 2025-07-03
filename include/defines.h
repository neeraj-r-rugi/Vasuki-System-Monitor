//System Libraries
#ifndef DEFINES_H
#define DEFINES_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

//External Libraries
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <SDL2/SDL_ttf.h>

//Program headers
#include "main.h"
#include "cpu.h"
#include "process.h"

//program constants
extern int WINDOW_HEIGHT;
extern int WINDOW_WIDTH;
extern bool PROGRAM_IS_RUNNING;

//SDL Program Constants
extern SDL_Event * EVENT; 




#endif