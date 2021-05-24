/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** set_music_setting.c
*/

#include "../../include/myrpg.h"

void set_music(menu *men, st_window *win)
{
    if (men->volume.pos.y == 530) {
        if (sfKeyboard_isKeyPressed(sfKeyRight)) {
            sfSprite_setScale(men->song.next,           \
                            (sfVector2f){0.4, 0.4});
            sfSprite_setPosition(men->song.next,                \
                                (sfVector2f){1000, 545});
        } else sfSprite_setScale(men->song.next,                \
                                (sfVector2f){0.3, 0.3});
        if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
            sfSprite_setScale(men->song.prec,           \
                            (sfVector2f){0.4, 0.4});
        } else sfSprite_setScale(men->song.prec,                \
                                (sfVector2f){0.3, 0.3}); }
    sfSprite_setColor(men->song.next, (sfColor){125, 60, 152, 255});
    sfSprite_setColor(men->song.prec, (sfColor){125, 60, 152, 255});
}