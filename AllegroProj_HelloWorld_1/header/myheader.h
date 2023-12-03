#ifndef myheader
#define myheader

#include <stdio.h>

#define DOWN_RIGHT 0
#define UP_RIGHT 1
#define DOWN_LEFT 2
#define UP_LEFT 3

#define SCREEN_W 640
#define SCREEN_H 480
#define BALL_SIZE 40
/*
struct myball
{
    int x;
    int y;
    int dir;
};

typedef struct myball myballs;

myballs allballs[2];
*/
void moveBall(int *x, int *y, int *dir);
void reverseVerticalDirection(int *dir);
void reverseHorizontalDirection(int *dir);

#endif