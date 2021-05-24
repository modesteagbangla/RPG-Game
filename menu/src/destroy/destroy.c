/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** destroy.c
*/

#include "../../include/myrpg.h"

void my_destroy(st_window *dest, menu *men)
{
    my_destroy_one(dest, men);
    my_destroy_two(dest, men);
    my_destroy_three(dest, men);
    my_destroy_or(dest, men);
    sfClock_destroy(men->epit.epi_clock);
    sfClock_destroy(men->clock_loading);
    sfSprite_destroy(men->play_load);
    sfClock_destroy(men->setting_clock);
    sfSprite_destroy(men->turn_parametre);
    sfClock_destroy(men->clock_lg_play);
    sfText_destroy(men->text);
    sfClock_destroy(men->clock);
    sfSound_destroy(men->volume.sd_g);
    sfClock_destroy(men->c);
    sfRenderWindow_destroy(dest->window_1);
}