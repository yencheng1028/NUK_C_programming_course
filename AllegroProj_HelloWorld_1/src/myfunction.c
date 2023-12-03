#include "C:\AllegroProj_HelloWorld\header\myheader.h"

void moveBall(int *x, int *y, int *dir) 
{
    switch (*dir)
    {
    case DOWN_RIGHT:
        *x = *x + 1; 
        ++*y;            
        break;
    case UP_RIGHT:
        ++*x; 
        --*y; 
        break;
    case DOWN_LEFT:
        --*x; /* move the ball to the left */
        ++*y; /* move the ball down */
        break;
    case UP_LEFT:
        --*x; /* move the ball to the left */
        --*y; /* move the ball up */
        break;
    } 

    /* make sure the ball doesnt go off the screen */

    /* if the ball is going off the top or bottom... */
    if (*y <= 0 || *y >= (SCREEN_H - BALL_SIZE))
        reverseVerticalDirection(dir); 

    /* if the ball is going off the left or right... */
    if (*x <= 0 || *x >= (SCREEN_W - BALL_SIZE))
        reverseHorizontalDirection(dir); 
}

void reverseVerticalDirection(int *dir) /* reverse the balls up-down direction */
{
    if (*dir == DOWN_RIGHT)
        *dir = UP_RIGHT;
    else if (*dir == DOWN_LEFT)
        *dir = UP_LEFT;
    else if (*dir == UP_RIGHT)
        *dir = DOWN_RIGHT;
    else if (*dir == UP_LEFT)
        *dir = DOWN_LEFT;
} 

void reverseHorizontalDirection(int *dir) /* reverses the horizontal direction */
{
    switch (*dir)
    {
    case DOWN_RIGHT:
        *dir = DOWN_LEFT;
        break;
    case UP_RIGHT:
        *dir = UP_LEFT;
        break;
    case DOWN_LEFT:
        *dir = DOWN_RIGHT;
        break;
    case UP_LEFT:
        *dir = UP_RIGHT;
        break;
    } 
} 