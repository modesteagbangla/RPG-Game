/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** menu.c
*/

#include "../../include/myrpg.h"

int my_menu(st_window *win, menu *men)
{
    sfRenderWindow_clear(win->window_1, sfBlack);
    men->anime.anime_time = sfClock_getElapsedTime(men->anime.anime_clock);
    men->epit.epi_time = sfClock_getElapsedTime(men->epit.epi_clock);
    men->pi.diamant_time = sfClock_getElapsedTime(men->pi.diamant_clock);
    position_menu(win, men);
    sfSprite_setTextureRect(men->men, men->move_men);
    choose_option_menu(win, men);
    select_menu(win, men);
    epi_fantasy(win, men);
    sfRenderWindow_drawSprite(win->window_1, men->background, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->men, NULL);
    sfSprite_setTextureRect(men->epit.epi, men->epit.epi_rect);
    sfRenderWindow_drawSprite(win->window_1, men->epit.epi, NULL);
    sfSprite_setTextureRect(men->anime.anime_s, men->anime.anime_rect);
    sfRenderWindow_drawSprite(win->window_1, men->anime.anime_s, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->t_t, NULL);
    return (0);
}