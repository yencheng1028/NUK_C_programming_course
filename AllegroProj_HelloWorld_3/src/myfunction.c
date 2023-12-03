#include "C:\AllegroProj_HelloWorld\header\myheader.h"

void checkESC(ALLEGRO_KEYBOARD_STATE *KB, ALLEGRO_BITMAP *img, myballs allballs[],int i)
{  
    while (1)
    {
        if (!al_key_down(KB, ALLEGRO_KEY_ESCAPE))
        {

            moveBall(allballs, i);

            al_draw_bitmap(img, allballs[i].x, allballs[i].y, 0);

            al_rest(0.01);

            al_flip_display();
            al_clear_to_color(al_map_rgb(50, 190, 50));
            al_get_keyboard_state(KB);
        }else
        {
            al_destroy_bitmap(img);

            break;
        }
    }
      
}

void moveBall(myballs allballs[],int label)
{
    switch (allballs[label].dir)
    {
    case DOWN_RIGHT:
        allballs[label].x = allballs[label].x + 1;
        allballs[label].y = allballs[label].y + 5;
        break;
    case UP_RIGHT:
        allballs[label].x = allballs[label].x + 1;
        allballs[label].y = allballs[label].y - 1;
        break;
    case DOWN_LEFT:
        allballs[label].x = allballs[label].x - 1;
        allballs[label].y = allballs[label].y + 5;
        break;
    case UP_LEFT:
        allballs[label].x = allballs[label].x - 1;
        allballs[label].y = allballs[label].y - 1;
        break;
    } 

    /* make sure the ball doesnt go off the screen */

    /* if the ball is going off the top or bottom... */
    if (allballs[label].y <= 0 || allballs[label].y >= (SCREEN_H - BALL_SIZE))
        reverseVerticalDirection(&allballs[label].dir);

    /* if the ball is going off the left or right... */
    if (allballs[label].x <= 0 || allballs[label].x >= (SCREEN_W - BALL_SIZE))
        reverseHorizontalDirection(&allballs[label].dir);
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

