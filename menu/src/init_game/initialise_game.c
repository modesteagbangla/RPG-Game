/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** initialise_game.c
*/

#include "../../include/myrpg.h"

void initialise_game(st_window *win, menu *men, int ac, char **av)
{
    function_create_texture(win, men, ac, av);
    function_create_sprite(win, men);
    function_set_texture(win, men);
    win = initialise_player(win, men);
    sfSprite_setPosition(men->loading, (sfVector2f){610, 550});
    sfSprite_setPosition(men->loading_play, (sfVector2f){550, 500});
    sfSprite_setScale(men->loading, (sfVector2f){0.2, 0.2});
    men->song.i = 0, men->song.j = 0;
}