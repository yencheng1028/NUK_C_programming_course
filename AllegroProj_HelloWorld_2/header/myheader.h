#ifndef myheader
#define myheader

#include <stdio.h>
#include <stdlib.h>

#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>

#define DOWN_RIGHT 0
#define UP_RIGHT 1
#define DOWN_LEFT 2
#define UP_LEFT 3

#define SCREEN_W 960
#define SCREEN_H 720
#define BALL_SIZE 225
#define BALL_SIZE2 225

struct myball
{
    int x;
    int y;
    int dir;
};
typedef struct myball myballs;

void moveBall(myballs allballs[]);
void reverseVerticalDirection(int* dir);
void reverseHorizontalDirection(int* dir);
void checkESC(ALLEGRO_KEYBOARD_STATE *KB, ALLEGRO_BITMAP *img, myballs allballs[]);

#endif