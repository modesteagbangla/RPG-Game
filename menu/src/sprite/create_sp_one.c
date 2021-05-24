/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** create_sp_one.c
*/

#include "../../include/myrpg.h"

void function_create_sprite(st_window *win, menu *men)
{
    win->background = sfSprite_create();
    men->background = sfSprite_create();
    men->text = sfText_create();
    men->men = sfSprite_create();
    men->more = sfSprite_create();
    men->clock = sfClock_create();
    men->debut = sfSprite_create();
    men->setting = sfSprite_create();
    men->how_to_play = sfSprite_create();
    men->loading = sfSprite_create();
    men->clock_loading = sfClock_create();
    men->loading_play = sfSprite_create();
    men->clock_lg_play = sfClock_create();
    men->play_load = sfSprite_create();
    men->turn_parametre = sfSprite_create();
    men->c = sfClock_create();
    function_create_sprite_t(win, men);
    function_create_sprite_two(win, men);
}