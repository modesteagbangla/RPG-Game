/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** player_life.c
*/

#include "../../include/myrpg.h"

st_window *initialise_ennemie(st_window *win, menu *men)
{
    win->enemie.life = malloc(2);
    win->enemie.life[0] = '9', win->enemie.life[1] = '\0';
    win->enemie.money = malloc(2);
    win->enemie.money[0] = '9', win->enemie.money[1] = '\0';
    win->enemie.power = malloc(2);
    win->enemie.power[0] = '9', win->enemie.power[1] = '\0';
    return (win);
}

st_window *initialise_player(st_window *win, menu *men)
{
    men->search_option = 0;
    men->volume.volume = 100, win->score_life = 0, win->score_money = 0, \
        win->score_power = 0, win->n1 = 3, win->n2 = 3;
    men->b = 0, win->menu_pos = 0, win->backup = 0;
    men->volume.pos.x = -10, men->volume.pos.y = 230;
    win->volv = 100, men->volume.vrp = 0, men->volume.fp = win->volv;
    win->cloud.life = malloc(2);
    win->cloud.life[0] = '3', win->cloud.life[1] = '\0';
    win->cloud.money = malloc(2);
    win->cloud.money[0] = '5', win->cloud.money[1] = '\0';
    win->cloud.power = malloc(2);
    win->cloud.power[0] = '3', win->cloud.power[1] = '\0';
    win->cloud.level1 = malloc(2);
    win->cloud.level1[0] = '~', win->cloud.level1[1] = '\0';
    win = initialise_ennemie(win, men);
    return (win);
}