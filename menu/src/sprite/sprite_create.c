/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** sprite_create.c
*/

#include "../../include/myrpg.h"

void function_create_sprite_t(st_window *win, menu *men)
{
    men->setting_clock = sfClock_create();
    men->pi.coeur = sfSprite_create();
    men->pi.diamant = sfSprite_create();
    men->volume.sd_g = sfSound_create();
    men->song.next = sfSprite_create();
    men->song.prec = sfSprite_create();
    men->volume.rep = sfSound_create();
}