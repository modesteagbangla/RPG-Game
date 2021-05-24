/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** anim_epi_fantasy.c
*/

#include "../../include/myrpg.h"

void epi_fantasy(st_window *win, menu *men)
{
    if (men->anime.anime_time.microseconds > 25000) {
        men->anime.anime_rect.left += 592;
        if (men->anime.anime_rect.left >= 5328) {
            men->anime.anime_rect.top += 360;
            men->anime.anime_rect.left = 0;
            if (men->anime.anime_rect.top >= 3960)
                men->anime.anime_rect.top = 0; }
        sfClock_restart(men->anime.anime_clock); }
    if (men->epit.epi_time.microseconds > 80000) {
        men->epit.epi_rect.left += 692;
        if (men->epit.epi_rect.left >= 2768) {
            men->epit.epi_rect.left = 0;
            men->epit.epi_rect.top += 168;
            if (men->epit.epi_rect.top >= 840)
                men->epit.epi_rect.top = 0; }
        sfClock_restart(men->epit.epi_clock); }
}