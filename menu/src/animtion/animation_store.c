/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** animation_store.c
*/

#include "../../include/myrpg.h"

void animation_lpm(st_window *win, menu *men)
{
    if (men->pi.piece_time.microseconds > 90000) {
        men->pi.piece_rect.left += 204;
        if (men->pi.piece_rect.left >= 1020)
            men->pi.piece_rect.left = 0;
        sfClock_restart(men->pi.piece_clock); }
    if (men->pi.coeur_time.microseconds > 80000) {
        men->pi.coeur_rect.left += 500;
        if (men->pi.coeur_rect.left >= 4500)
            men->pi.coeur_rect.left = 0;
        sfClock_restart(men->pi.coeur_clock); }
    if (men->pi.diamant_time.microseconds > 70000) {
        men->pi.diamant_rect.left += 400;
        if (men->pi.diamant_rect.left >= 3600)
            men->pi.diamant_rect.left = 0;
        sfClock_restart(men->pi.diamant_clock); }
}