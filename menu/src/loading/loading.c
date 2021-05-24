/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** loading.c
*/

#include "../../include/myrpg.h"

st_window *anime(st_window *win, menu *men)
{
    men->time = sfClock_getElapsedTime(men->clock);
    if (men->time.microseconds > 19000000 && win->backup == 0) {
        win->backup = -1;
        return (win); }
    return (win);
}

st_window *anime_t(st_window *win, menu *men)
{
    men->ttt = sfClock_getElapsedTime(men->tt);
    if (win->backup == -3 && men->ttt.microseconds > 6000000) {
        win->backup = -4;
        return (win); }
    return (win);
}
