/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** set_volume.c
*/

#include "../../include/myrpg.h"

void set_vol(menu *men, st_window *win)
{
    if (men->volume.pos.y == 230) {
        if (sfKeyboard_isKeyPressed(sfKeyRight)) {
            sfSprite_setPosition(men->volume.vol_s_moins,       \
                                (sfVector2f){1000, 265});
            sfSprite_setScale(men->volume.vol_s_moins,  \
                            (sfVector2f){0.4, 0.4});
        } else sfSprite_setScale(men->volume.vol_s_moins,       \
                                (sfVector2f){0.3, 0.3});
        if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
            sfSprite_setScale(men->volume.vol_s_plus,   \
                            (sfVector2f){0.4, 0.4});
        } else sfSprite_setScale(men->volume.vol_s_plus,        \
                                (sfVector2f){0.3, 0.3}); }
}