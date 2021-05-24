/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** rect_pos.c
*/

#include "../../include/myrpg.h"

void function_set_rect(st_window *win, menu *men)
{
    sfSprite_setTextureRect(men->epit.epi, men->epit.epi_rect);
    sfSprite_setTextureRect(men->men, men->move_men);
    sfSprite_setTextureRect(men->loading, men->loading_rect);
    sfSprite_setTextureRect(men->loading_play, men->loading_play_rect);
    sfSprite_setTextureRect(men->turn_parametre, men->setting_rect);
    sfSprite_setTextureRect(men->pi.coeur, men->pi.coeur_rect);
    sfSprite_setTextureRect(men->pi.diamant, men->pi.diamant_rect);
    sfSprite_setTextureRect(men->pi.piece, men->pi.piece_rect);
    sfSprite_setTextureRect(men->anime.anime_s, men->anime.anime_rect);
}