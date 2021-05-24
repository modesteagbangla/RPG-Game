/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** destroy_three.c
*/

#include "../../include/myrpg.h"

void my_destroy_three(st_window *dest, menu *men)
{
    sfSprite_destroy(men->t_t);
    sfSprite_destroy(men->volume.flech_s);
    sfSprite_destroy(men->epit.epi);
    sfSprite_destroy(men->achat.achat_two);
    sfSprite_destroy(men->achat.achat_one);
    sfSprite_destroy(men->more);
    sfSprite_destroy(men->men);
    sfSprite_destroy(men->setting);
    sfSprite_destroy(men->debut);
    sfSprite_destroy(men->how_to_play);
    sfSprite_destroy(men->loading);
    sfSprite_destroy(men->pi.coeur);
    sfSprite_destroy(men->pi.diamant);
    sfSprite_destroy(men->loading_play);
    sfClock_destroy(men->pi.piece_clock);
    sfClock_destroy(men->pi.diamant_clock);
    sfClock_destroy(men->pi.coeur_clock);
    sfClock_destroy(men->tt);
    sfClock_destroy(men->anime.anime_clock);
}