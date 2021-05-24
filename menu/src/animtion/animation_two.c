/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** path_game.c
*/

#include "../../include/myrpg.h"

void decide_anim(st_window *win, menu *men)
{
    if (win->backup == 9)
        sfRenderWindow_close(win->window_1);
    else if (win->backup == 1) {
        sfSound_setVolume(men->volume.sound, win->volv);
        sfSound_setVolume(men->volume.sd_g, 0);
        my_menu(win, men); }
    if (win->backup == 2)
        display_more(men, win);
    else if (win->backup == 3) {
        display_setting(men, win); }
    if (win->backup == -2) {
        sfRenderWindow_clear(win->window_1, sfBlack);
        sfRenderWindow_drawSprite(win->window_1, men->how_to_play, NULL); }
    else if (win->backup == -21) {
        sfRenderWindow_clear(win->window_1, sfBlack);
        sfRenderWindow_drawSprite(win->window_1, men->hty, NULL); }
    decide_anim_one(win, men);
}