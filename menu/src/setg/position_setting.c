/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_setting.c
*/

#include "../../include/myrpg.h"

void position_sett(menu *men, st_window *win)
{
    sfSprite_setScale(men->volume.vol_s_moins, (sfVector2f){0.3, 0.3});
    sfSprite_setScale(men->volume.vol_s_plus, (sfVector2f){0.3, 0.3});
    sfSprite_setScale(men->song.prec, (sfVector2f){0.3, 0.3});
    sfSprite_setScale(men->song.next, (sfVector2f){0.3, 0.3});
    sfSprite_setScale(men->volume.flech_s, (sfVector2f){0.2, 0.2});
    sfSprite_setPosition(men->volume.vol_s_plus, (sfVector2f){750, 230});
    sfSprite_setPosition(men->volume.vol_s_moins, (sfVector2f){1000, 260});
    sfSprite_setPosition(men->song.prec, (sfVector2f){750, 530});
    sfSprite_setPosition(men->song.next, (sfVector2f){1000, 540});
}