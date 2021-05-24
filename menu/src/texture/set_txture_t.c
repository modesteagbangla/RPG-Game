/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** set_txture_t.c
*/

#include "../../include/myrpg.h"

void function_set_txt_two(st_window *win, menu *men)
{
    sfSprite_setTexture(men->play_load, men->play_load_t, sfTrue);
    sfSprite_setTexture(men->turn_parametre, men->turn_parametre_t, sfTrue);
    sfSprite_setTexture(men->pi.coeur, men->pi.coeur_t, sfTrue);
    sfSprite_setTexture(men->pi.diamant, men->pi.diamant_t, sfTrue);
    sfSprite_setTexture(men->pi.piece, men->pi.piece_t, sfTrue);
    sfSprite_setTexture(men->level.level_s, men->level.level_t, sfTrue);
    sfSprite_setTexture(men->store.level_s, men->store.level_t, sfTrue);
    sfSprite_setTexture(men->anime.anime_s, men->anime.anime_t, sfTrue);
    sfSprite_setTexture(men->t_t, men->tt_t, sfTrue);
    sfSprite_setTexture                                                 \
        (men->volume.vol_s_moins, men->volume.vol_t_moins, sfTrue);
    sfSprite_setTexture                                                 \
        (men->volume.vol_s_plus, men->volume.vol_t_plus, sfTrue);
    sfSprite_setTexture(men->volume.flech_s, men->volume.flech_t, sfTrue);
    sfSprite_setTexture(men->achat.achat_one, men->achat.achat_one_t, sfTrue);
    sfSprite_setTexture(men->achat.achat_two, men->achat.achat_two_t, sfTrue);
    sfSprite_setTexture(men->epit.epi, men->epit.epi_t, sfTrue);
    sfSound_setBuffer(men->volume.sound, men->volume.sbuffer);
    sfSound_setBuffer(men->volume.sdp, men->volume.sdpb);
}