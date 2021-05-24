/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_store.c
*/

#include "../../include/myrpg.h"

void position_store(st_window *win, menu *men)
{
    men->pi.piece_time = sfClock_getElapsedTime(men->pi.piece_clock);
    men->pi.coeur_time = sfClock_getElapsedTime(men->pi.coeur_clock);
    men->pi.diamant_time = sfClock_getElapsedTime(men->pi.diamant_clock);
    sfSprite_setPosition(men->pi.piece, (sfVector2f){1000, 20});
    sfSprite_setPosition(men->pi.coeur, (sfVector2f){100, 300});
    sfSprite_setPosition(men->pi.diamant, (sfVector2f){840, 290});
    sfSprite_setPosition(men->achat.achat_one, (sfVector2f){440, 490});
    sfSprite_setPosition(men->achat.achat_two, (sfVector2f){1150, 490});
    sfSprite_setScale(men->achat.achat_one, (sfVector2f){1, 1});
    sfSprite_setScale(men->achat.achat_two, (sfVector2f){1, 1});
}