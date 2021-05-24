/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** loading_enter_game.c
*/

#include "../../include/myrpg.h"

void loading_enter_game(st_window *win, menu *men)
{
    sfRenderWindow_clear(win->window_1, sfBlack);
    men->time_loading = sfClock_getElapsedTime(men->clock_loading);
    sfRenderWindow_drawSprite(win->window_1, win->background, NULL);
    if (men->time_loading.microseconds > 15000) {
        men->loading_rect.left += 400;
        if (men->loading_rect.left == 4400)
            men->loading_rect.left = 0;
        sfClock_restart(men->clock_loading); }
    sfSprite_setTextureRect(men->loading, men->loading_rect);
    sfRenderWindow_drawSprite(win->window_1, men->loading, NULL);
}
