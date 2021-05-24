/*
** EPITECH PROJECT, 2021
** house
** File description:
** house
*/

#ifndef HOUSE_H_
#define HOUSE_H_

#include "rpg.h"
#include "war.h"

typedef struct house
{
    sfSprite *s_house;
    sfTexture *t_house;
    sfClock *Clock1;
    float hs_x;
    float hs_y;
}house;

void check_hs_direction(Naruto *sa, house *co);
void check_house(Naruto *sa, house *co);
void settexture_cloud(Naruto *sa);
void sprite_house(house *co);
void destroy_house(house *co);
void operation_house(Naruto *sa);
#endif
