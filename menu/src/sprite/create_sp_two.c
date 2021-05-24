/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** create_sp_two.c
*/

#include "../../include/myrpg.h"

void function_create_sprite_two(st_window *win, menu *men)
{
    men->pi.piece = sfSprite_create();
    men->pi.piece_clock = sfClock_create();
    men->pi.diamant_clock = sfClock_create();
    men->pi.coeur_clock = sfClock_create();
    men->level.level_s = sfSprite_create();
    men->store.level_s = sfSprite_create();
    men->anime.anime_s = sfSprite_create();
    men->tt = sfClock_create();
    men->anime.anime_clock = sfClock_create();
    men->t_t = sfSprite_create();
    men->epit.epi_clock = sfClock_create();
    men->volume.vol_s_moins = sfSprite_create();
    men->volume.vol_s_plus = sfSprite_create();
    men->volume.flech_s = sfSprite_create();
    men->volume.sound = sfSound_create();
    men->volume.sdp = sfSound_create();
    men->epit.epi = sfSprite_create();
    men->achat.achat_one = sfSprite_create();
    men->achat.achat_two = sfSprite_create();
    men->hty = sfSprite_create();
}