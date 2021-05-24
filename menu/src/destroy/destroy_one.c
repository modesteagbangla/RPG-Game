/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** destroy_one.c
*/

#include "../../include/myrpg.h"

void my_destroy_one(st_window *dest, menu *men)
{
    sfSprite_destroy(dest->background);
    sfTexture_destroy(dest->texture_background);
    sfTexture_destroy(men->texture_background);
    sfTexture_destroy(men->hty_t);
    sfTexture_destroy(men->store.level_t);
    sfTexture_destroy(men->anime.anime_t);
    sfTexture_destroy(men->tt_t);
    sfTexture_destroy(men->volume.vol_t_moins);
    sfTexture_destroy(men->volume.vol_t_plus);
    sfTexture_destroy(men->volume.flech_t);
    sfTexture_destroy(men->epit.epi_t);
    sfTexture_destroy(men->achat.achat_one_t);
    sfTexture_destroy(men->achat.achat_two_t);
    sfTexture_destroy(men->how_to_play_t);
    sfTexture_destroy(men->loading_t);
    sfTexture_destroy(men->loading_play_texture);
    sfTexture_destroy(men->play_load_t);
    sfTexture_destroy(men->turn_parametre_t);
    sfTexture_destroy(men->pi.coeur_t);
}