/*
** EPITECH PROJECT, 2021
** war
** File description:
** h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "rpg.h"

#ifndef WAR_H_
#define WAR_H_

#include "../../menu/include/myrpg.h"

typedef struct win
{
    sfSprite *s_win;
    sfTexture *t_win;
    sfClock *Clock1;
    sfIntRect rect1;
}win;

typedef struct vrif {
    int b, c, d;
}paus;

typedef struct war1 {
    sfClock *Clock1;
    sfClock *Clock2;
    sfClock *Clock3;
    sfClock *Clock4;
    sfClock *Clock5;
    sfClock *Clock6;
    sfClock *Clock7;
    sfClock *Clock8;
    sfClock *Clock9;
    sfClock *Clock10;
    sfSprite *s_background;
    sfTexture *t_background;
    sfSprite *s_backpause;
    sfTexture *t_backpause;
    sfSprite *s_att1_cloud;
    sfTexture *t_att1_cloud;
    sfSprite *s_att1_seph;
    sfTexture *t_att1_seph;
    sfSprite *s_att2_seph;
    sfTexture *t_att2_seph;
    sfSprite *s_att2_cloud;
    sfTexture *t_att2_cloud;
    sfSprite *s_att3_seph;
    sfTexture *t_att3_seph;
    sfSprite *s_soutient2;
    sfTexture *t_soutient2;
    sfSprite *s_pos_fight;
    sfTexture *t_pos_fight;
    sfSprite *s_sou1;
    sfTexture *t_sou1;
    sfSprite *s_pos_fight_s;
    sfTexture *t_pos_fight_s;
    sfSprite *s_curs;
    sfTexture *t_curs;

    sfRenderWindow *window;
    sfIntRect rect1;
    sfIntRect rect2;
    sfIntRect rect3;
    sfIntRect rect4;
    sfIntRect rect5;
    sfIntRect rect6;
    sfIntRect rect7;
    sfIntRect rect8;
    sfIntRect rect9;
    sfTime time1;
    int atta;
    int repost;
    int a1;

    sfSprite *s_status;
    sfTexture *t_status;
    st_window *win;
}war1;

void sprite_back(war1 *na);
void destroy_war(war1 *na);
st_window *operation_war(Naruto *sa, st_window *win);
void operate_pause(Naruto *sa);
void operation_status(Naruto *sa);
void check_life_enemie(war1 *na, int a, int b);
void check_life_cloud(war1 *na, int a, int b);

#endif
