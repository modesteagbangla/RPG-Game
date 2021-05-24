/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** destroy_two.c
*/

#include "../../include/myrpg.h"

void my_destroy_two(st_window *dest, menu *men)
{
    sfTexture_destroy(men->pi.diamant_t);
    sfTexture_destroy(men->pi.piece_t);
    sfTexture_destroy(men->level.level_t);
    sfTexture_destroy(men->men_t);
    sfTexture_destroy(men->more_texture);
    sfTexture_destroy(men->debut_texture);
    sfTexture_destroy(men->setting_texture);
    sfSprite_destroy(men->hty);
    sfSprite_destroy(men->background);
    sfSound_destroy(men->volume.sound);
    sfSoundBuffer_destroy(men->volume.sbuffer);
    sfSoundBuffer_destroy(men->volume.sdpb);
    sfSoundBuffer_destroy(men->volume.sd_gg);
    sfSound_destroy(men->volume.sdp);
    sfSprite_destroy(men->pi.piece);
    sfSprite_destroy(men->level.level_s);
    sfSprite_destroy(men->store.level_s);
    sfSprite_destroy(men->anime.anime_s);
    sfSprite_destroy(men->volume.vol_s_moins);
    sfSprite_destroy(men->volume.vol_s_plus);
}