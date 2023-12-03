#include "C:\AllegroProj_HelloWorld\header\myheader.h"

void checkESC(ALLEGRO_KEYBOARD_STATE *KB, ALLEGRO_BITMAP *img, myballs allballs[])
{
    while(1)
    {
        if (!al_key_down(KB, ALLEGRO_KEY_ESCAPE))
        {
            moveBall(allballs);
            // moveBall(&x2, &y2, &dir2);

            al_draw_bitmap(img, allballs[0].x, allballs[0].y, 0);

            al_rest(0.01);

            al_flip_display();
            al_clear_to_color(al_map_rgb(0, 255, 255));

            al_get_keyboard_state(KB);
        }
        else
        {
            al_destroy_bitmap(img);
        }
    }
}

void moveBall(myballs allballs[])
{
    switch (allballs[0].dir)
    {
    case DOWN_RIGHT:
        allballs[0].x = allballs[0].x + 1;
        ++allballs[0].y;
        break;
    case UP_RIGHT:
        ++allballs[0].x;
        --allballs[0].y;
        break;
    case DOWN_LEFT:
        --allballs[0].x; /* move the ball to the left */
        ++allballs[0].y; /* move the ball down */
        break;
    case UP_LEFT:
        --allballs[0].x; /* move the ball to the left */
        --allballs[0].y; /* move the ball up */
        break;
    } 

    /* make sure the ball doesnt go off the screen */

    /* if the ball is going off the top or bottom... */
    if (allballs[0].y <= 0 || allballs[0].y >= (SCREEN_H - BALL_SIZE))
        reverseVerticalDirection(&allballs[0].dir);

    /* if the ball is going off the left or right... */
    if (allballs[0].x <= 0 || allballs[0].x >= (SCREEN_W - BALL_SIZE))
        reverseHorizontalDirection(&allballs[0].dir);
}

void reverseVerticalDirection(int* dir) /* reverse the balls up-down direction */
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

void reverseHorizontalDirection(int* dir) /* reverses the horizontal direction */
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

