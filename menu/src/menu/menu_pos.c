/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** menu_pos.c
*/

#include "../../include/myrpg.h"

void position_menu(st_window *win, menu *men)
{
    sfSprite_setPosition(men->men, (sfVector2f){800, 300});
    sfSprite_setPosition(men->t_t, (sfVector2f){840, 300});
    sfSprite_setScale(men->pi.piece, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(men->pi.coeur, (sfVector2f){0.4, 0.4});
    sfSprite_setScale(men->pi.diamant, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(men->anime.anime_s, (sfVector2f){-300, 0});
    sfSprite_setPosition(men->epit.epi, (sfVector2f){700, 0});
    sfSprite_setScale(men->anime.anime_s, (sfVector2f){2, 2});
}