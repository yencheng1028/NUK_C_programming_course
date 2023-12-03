#include "C:\AllegroProj_HelloWorld\header\myheader.h"

#define SIZE 2

int main(void)
{

  myballs allballs[SIZE];

  allballs[0].x = 0; /*ball initial x-coordinate */
  allballs[0].y = 0; /*ball initial y-coordinate */
  allballs[0].dir = 0;

  ALLEGRO_BITMAP *ballimg = NULL ; 
  ALLEGRO_DISPLAY *display = NULL; /* pointer to display */
  ALLEGRO_KEYBOARD_STATE KBstate;

  al_init();             /* initialize Allegro */
  al_install_keyboard(); /* install the keyboard for Allegro to use */
  al_init_image_addon();

  display = al_create_display(SCREEN_W, SCREEN_H);



  al_get_keyboard_state(&KBstate);

  checkESC(&KBstate, al_load_bitmap("./img1.jfif"), allballs);

  system("PAUSE");

  al_destroy_display(display);

  return 0;
} 