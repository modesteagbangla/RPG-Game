/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** animation_one.c
*/

#include "../../include/myrpg.h"

void decide_anim_one(st_window *win, menu *men)
{
    if (win->backup == -3)
        loading_go_to_play(win, men);
    else if (win->backup == -4) {
        sfSound_setVolume(men->volume.sound, 0);
        sfSound_play(men->volume.sd_g);
        sfSound_setVolume(men->volume.sd_g, 100);
        sfSound_setLoop(men->volume.sd_g, sfTrue);
        check_move(win); }
    if (win->backup == -5) {
        sfRenderWindow_clear(win->window_1, sfBlack);
        sfRenderWindow_drawSprite(win->window_1, men->level.level_s, NULL); }
    else if (win->backup == -6)
        display_store(win, men);
    if (win->backup == 0)
        loading_enter_game(win, men);
    else if (win->backup == -1) {
        sfRenderWindow_clear(win->window_1, sfBlack);
        sfRenderWindow_drawSprite(win->window_1, men->debut, NULL); }
}