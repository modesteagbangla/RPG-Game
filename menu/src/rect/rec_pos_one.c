/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** rec_pos_one.c
*/

#include "../../include/myrpg.h"

void function_set_position_rect_two(st_window *win, menu *men)
{
    men->pi.piece_rect.top = 0;
    men->pi.piece_rect.left = 0;
    men->pi.piece_rect.height = 204;
    men->pi.piece_rect.width = 204;
    men->pi.coeur_rect.top = 0;
    men->pi.coeur_rect.left = 0;
    men->pi.coeur_rect.height = 498;
    men->pi.coeur_rect.width = 500;
    men->pi.diamant_rect.top = 0;
    men->pi.diamant_rect.left = 0;
    men->pi.diamant_rect.height = 400;
    men->pi.diamant_rect.width = 400;
    men->anime.anime_rect.top = 0;
    men->anime.anime_rect.left = 0;
    men->anime.anime_rect.height = 360;
    men->anime.anime_rect.width = 592;
    men->epit.epi_rect.top = 0;
    men->epit.epi_rect.left = 0;
    men->epit.epi_rect.height = 168;
    men->epit.epi_rect.width = 692;
}