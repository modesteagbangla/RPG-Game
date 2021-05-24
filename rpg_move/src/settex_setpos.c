/*
** EPITECH PROJECT, 2021
** position_and_texture
** File description:
** check_settexture check_setposition
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void check_settexture(war1 *na)
{
    sfSprite_setTextureRect(na->s_att1_cloud, na->rect1);
    sfSprite_setTextureRect(na->s_att1_seph, na->rect2);
    sfSprite_setTextureRect(na->s_att2_seph, na->rect3);
    sfSprite_setTextureRect(na->s_att2_cloud, na->rect4);
    sfSprite_setTextureRect(na->s_att3_seph, na->rect5);
    sfSprite_setTextureRect(na->s_soutient2, na->rect6);
    sfSprite_setTextureRect(na->s_pos_fight, na->rect7);
    sfSprite_setTextureRect(na->s_sou1, na->rect8);
    sfSprite_setTextureRect(na->s_pos_fight_s, na->rect9);
}

void check_setposition(war1 *na)
{
    sfSprite_setPosition(na->s_att1_cloud, (sfVector2f){200, 150});
    sfSprite_setPosition(na->s_att2_cloud, (sfVector2f){200, -100});
    sfSprite_setPosition(na->s_soutient2, (sfVector2f){200, -100});
    sfSprite_setPosition(na->s_pos_fight, (sfVector2f){200, 350});
    sfSprite_setPosition(na->s_sou1, (sfVector2f){200, 100});
    sfSprite_setPosition(na->s_att1_seph, (sfVector2f){100, 150});
    sfSprite_setPosition(na->s_att2_seph, (sfVector2f){100, 100});
    sfSprite_setPosition(na->s_att3_seph, (sfVector2f){100, -350});
    sfSprite_setPosition(na->s_pos_fight_s, (sfVector2f){1000, 350});
}