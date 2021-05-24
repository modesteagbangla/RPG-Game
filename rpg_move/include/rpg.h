/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** my_hunter
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_

#include "../../menu/include/myrpg.h"

typedef struct perso {
    sfClock *Clock6;
    sfClock *Clock7;
    sfClock *Clock8;
    sfClock *Clock9;
    sfClock *Clock10;
    sfClock *Clock11;
    sfClock *Clock12;
    sfClock *Clock13;
    sfClock *Clock14;
    sfClock *Clock15;
    sfClock *Clock16;
    sfSprite *s_poulet;
    sfTexture *t_poulet;
    sfSprite *s_poulet1;
    sfTexture *t_poulet1;
    sfSprite *s_old1;
    sfTexture *t_old1;
    sfSprite *s_old2;
    sfTexture *t_old2;
    sfSprite *s_man1;
    sfTexture *t_man1;
    sfSprite *s_man2;
    sfTexture *t_man2;
    sfSprite *s_backg;
    sfTexture *t_backg;
    sfTexture *t_pap1;
    sfSprite *s_pap1;
    sfTexture *t_pap2;
    sfSprite *s_pap2;
    sfTexture *t_pap1_2;
    sfSprite *s_pap1_2;
    sfTexture *t_pap2_2;
    sfSprite *s_pap2_2;
    sfSprite *s_cat1;
    sfTexture *t_cat1;
    sfSprite *s_cat2;
    sfTexture *t_cat2;
    sfSprite *s_bat1;
    sfTexture *t_bat1;
    sfSprite *s_bat2;
    sfTexture *t_bat2;
    sfSprite *s_drag1;
    sfTexture *t_drag1;
    sfSprite *s_drag2;
    sfTexture *t_drag2;
    sfSprite *s_white1;
    sfTexture *t_white1;
    sfSprite *s_white2;
    sfTexture *t_white2;
    sfIntRect rect9;
    sfIntRect rect10;
    sfIntRect rect11;
    sfIntRect rect12;
    sfIntRect rect13;
    sfIntRect rect14;
    sfIntRect rect15;
    sfIntRect rect16;
    sfIntRect rect17;
    sfIntRect rect18;
    sfIntRect rect19;
    sfIntRect rect20;
    sfIntRect rect21;
    sfIntRect rect22;
    sfIntRect rect23;
    sfIntRect rect24;
    sfIntRect rect25;
    sfIntRect rect26;

}perso;

typedef struct animation {
    int ax1;
    int ax2;
    float x_lap_dr;
    float x_lap_gu;
    float y_old_up;
    float y_old_down;
    float x_poul_dr;
    float x_poul_gu;
    float y_man_up;
    float y_man_down;
    float y_pap_up;
    float y_pap_down;
    float y_drag_up;
    float y_drag_down;
    float x_cat_left;
    float x_cat_right;
    float x_sorc_left;
    float x_sorc_right;
    float x_bat_left;
    float x_bat_right;

}ani;

typedef struct dialogue {
    float xpng1;
    float ypng1;
    float xpng2;
    float ypng2;
    float xpng3;
    float ypng3;
}dia;

typedef struct Naruto
{
    sfSprite *s_face;
    sfSprite *s_gauche;
    sfSprite *s_droite;
    sfSprite *s_dos;
    sfSprite *s_map;
    sfTexture *t_map;
    sfTexture *t_face;
    sfTexture *t_gauche;
    sfTexture *t_droite;
    sfSprite *s_l_right;
    sfTexture *t_l_right;
    sfSprite *s_l_left;
    sfTexture *t_l_left;
    sfTexture *t_dos;
    sfClock *Clock;
    sfClock *Clock1;
    sfClock *Clock2;
    sfClock *Clock3;
    sfClock *Clock4;
    sfClock *Clock5;
    sfText *text;
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfFont *font;
    sfIntRect rect;
    sfIntRect rect1;
    sfIntRect rect2;
    sfIntRect rect3;
    sfIntRect rect4;
    sfIntRect rect5;
    sfIntRect rect6;
    sfIntRect rect7;
    sfIntRect rect8;
    sfVector2f Horizon3;
    int face;
    sfEvent event;
    sfTime time;
    sfTime time1;
    sfTime time2;
    sfTime time3;
    float m;
    int obs;
    sfVideoMode mode;
    ani obstacle;
    float x_map;
    float y_map;
    ani anima;
    perso png;
    dia dialogue;
    st_window *win;
}Naruto;

#include "war.h"
void usage(void);
int evenement(sfRenderWindow *window, Naruto *sa, st_window *win);
void operation(sfRenderWindow *window, Naruto *sa, float *fx, float *fy);
void move_face(sfRenderWindow *window, sfTime time, Naruto *sa);
void move_gauche(sfRenderWindow *window, sfTime time1, Naruto *sa);
void move_droite(sfRenderWindow *window, sfTime time2, Naruto *sa);
void move_dos(sfRenderWindow *window, sfTime time3, Naruto *sa);
void l_left(sfRenderWindow *window, Naruto *sa);
void l_right(sfRenderWindow *window, Naruto *sa);
void move_pnj1(sfRenderWindow *window, Naruto *sa);

void move_pnj2(sfRenderWindow *window, Naruto *sa);
void move_poulet(sfRenderWindow *window, Naruto *sa);
void move_pap(sfRenderWindow *window, Naruto *sa);
void move_pap2(sfRenderWindow *window, Naruto *sa);
void move_cat1(sfRenderWindow *window, Naruto *sa);
void move_bat(sfRenderWindow *window, Naruto *sa);
void move_drag1(sfRenderWindow *window, Naruto *sa);
void move_white(sfRenderWindow *window, Naruto *sa);
void sprite_map(Naruto *sa);
void sprite_face(Naruto *sa);
void sprite_gauche(Naruto *sa);
void sprite_droite(Naruto *sa);
void sprite_dos(Naruto *sa);
void lapin_left(Naruto *sa);
void lapin_right(Naruto *sa);
void pnj1(Naruto *sa);
void pnj2(Naruto *sa);
void poulet(Naruto *sa);
void texture_font(Naruto *sa);
void sprite_background(Naruto *sa);
void sprite_papillon1(Naruto *sa);
void sprite_papillon2(Naruto *sa);
void sprite_cat1(Naruto *sa);
void sprite_bateau(Naruto *sa);
void sprite_dragon1(Naruto *sa);
void sprite_white(Naruto *sa);
int check_obs(Naruto *sa, int x, int y);
void check_dialogue(sfRenderWindow *window, int x, int y);
void check_action(Naruto *sa, int x, int y, st_window *win);
void check_direction(sfRenderWindow *window, Naruto *sa, float *fx, float *fy);
void operation_cinematic(Naruto *sa);
void put_ask(Naruto *sa, char *ask);
void put_ask2(Naruto *sa, char *ask, sfVector2f pos, int size);
char *asked_man(void);
char *asked(void);

#endif