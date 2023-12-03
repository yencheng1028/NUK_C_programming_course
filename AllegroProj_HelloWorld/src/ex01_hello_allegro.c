#include "C:\AllegroProj_HelloWorld\header\myheader.h"
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>

int main(void)
{
    int x,y,dir;
    int x2, y2, dir2;

    ALLEGRO_BITMAP *ballimg = NULL;     /* pointer to the ball's image bitmap */
    ALLEGRO_DISPLAY *display = NULL; /* pointer to display */
    ALLEGRO_KEYBOARD_STATE KBstate;

    al_init();             /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();

    display = al_create_display(SCREEN_W, SCREEN_H);

    ballimg = al_load_bitmap("./red.jpg"); 
    x = SCREEN_W / 2;             /* give the ball its initial x-coordinate */
    y = SCREEN_H / 2;             /* give the ball its initial y-coordinate */
    srand(time(NULL));                 /* seed the random function */
    dir = rand() % 4;            /* and then make a random initial direction */
    al_get_keyboard_state(&KBstate);

    while (!al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
    {
        moveBall(&x, &y, &dir);
      //moveBall(&x2, &y2, &dir2);

        al_draw_bitmap(ballimg, x, y, 0); /* draw the bitmap */

        al_rest(0.01);

        al_flip_display(); 
        al_clear_to_color(al_map_rgb(0, 255, 255));

        al_get_keyboard_state(&KBstate);

    }

    system("PAUSE");

    al_destroy_bitmap(ballimg);     /* destroy the ball bitmap */
    al_destroy_display(display); /* destroy the display */

    return 0;
} 