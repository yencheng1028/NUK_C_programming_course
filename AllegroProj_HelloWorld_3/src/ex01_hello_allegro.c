#include "C:\AllegroProj_HelloWorld\header\myheader.h"

int main(void)
{

  myballs allballs[SIZE];

  /*ball initial coordinate */
  allballs[0].x = 0; 
  allballs[0].y = 0;
  allballs[0].dir = DOWN_RIGHT;

  allballs[1].x = 960;
  allballs[1].y = 0;
  allballs[1].dir = DOWN_LEFT;

  // ALLEGRO_BITMAP *img = NULL;
  // ALLEGRO_BITMAP *img2 = NULL;
  ALLEGRO_BITMAP *img[SIZE];
  ALLEGRO_DISPLAY *display = NULL; 
  ALLEGRO_KEYBOARD_STATE KBstate;

  al_init();             
  al_install_keyboard();  /* for Allegro to use */
  al_init_image_addon();

  display = al_create_display(SCREEN_W, SCREEN_H);

  img[0] = al_load_bitmap("./img1.jfif");
  img[1] = al_load_bitmap("./img2.jfif");
  // img = al_load_bitmap("./img1.jfif");
  // img2 = al_load_bitmap("./img2.jfif");
  // al_draw_bitmap(img, allballs[0].x, allballs[0].y, 0);
  // al_draw_bitmap(img2, allballs[1].x, allballs[1].y, 0);

  al_get_keyboard_state(&KBstate);
  checkESC(&KBstate, al_load_bitmap("./img1.jfif"), allballs,0);
  checkESC(&KBstate, al_load_bitmap("./img2.jfif"), allballs,1);

  system("PAUSE");

  al_destroy_display(display);

  return 0;
} 