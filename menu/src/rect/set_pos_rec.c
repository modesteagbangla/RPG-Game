/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** set_pos_rec.c
*/

#include "../../include/myrpg.h"

void function_set_position_rect(st_window *win, menu *men)
{
    men->move_men.top = 10;
    men->move_men.left = 0;
    men->move_men.width = 500;
    men->move_men.height = 300;
    men->loading_rect.top = 0;
    men->loading_rect.left = 0;
    men->loading_rect.width = 400;
    men->loading_rect.height = 400;
    men->loading_play_rect.top = 0;
    men->loading_play_rect.left = 0;
    men->loading_play_rect.height = 256;
    men->loading_play_rect.width = 256;
    men->setting_rect.top = 0;
    men->setting_rect.left = 0;
    men->setting_rect.height = 200;
    men->setting_rect.width = 200;
    function_set_position_rect_two(win, men);
}