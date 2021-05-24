/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** write_store.c
*/

#include "../../include/myrpg.h"

void put_store(st_window *win, char *ask, sfVector2f x, sfColor color)
{
    sfFont *font = sfFont_createFromFile("rpg_move/font/Fujita Ray.ttf");
    sfText *text = sfText_create();
    sfText_setString(text, ask);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 250);
    sfText_setColor(text, color);
    sfText_setPosition(text, x);
    sfRenderWindow_drawText(win->window_1, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}