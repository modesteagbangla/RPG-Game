/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** more.c
*/

#include "../../include/myrpg.h"

int display_more(menu *men, st_window *win)
{
    sfRenderWindow_clear(win->window_1, sfBlack);
    sfRenderWindow_drawSprite(win->window_1, men->more, NULL);
    return (0);
}