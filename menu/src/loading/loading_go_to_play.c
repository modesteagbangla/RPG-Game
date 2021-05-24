/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** loading_go_to_play.c
*/

#include "../../include/myrpg.h"

void decremente_sound(st_window *win, menu *men)
{
    men->tc = sfClock_getElapsedTime(men->c);
    if (win->volv > 10) {
        if (men->tc.microseconds > 500000) {
            win->volv -= 10;
            sfSound_setVolume(men->volume.sound, win->volv);
            sfClock_restart(men->c); } }
}

void loading_go_to_play(st_window *win, menu *men)
{
    sfRenderWindow_clear(win->window_1, sfBlack);
    sfRenderWindow_drawSprite(win->window_1, men->play_load, NULL);
    decremente_sound(win, men);
    men->time_lg_play = sfClock_getElapsedTime(men->clock_lg_play);
    if (men->time_lg_play.microseconds > 20000) {
        men->loading_play_rect.left += 256;
        if (men->loading_play_rect.left == 2304) {
            men->loading_play_rect.left = 0;
            men->loading_play_rect.top += 256;
            if (men->loading_play_rect.top == 2048)
                men->loading_play_rect.top = 0; }
        sfClock_restart(men->clock_lg_play); }
    sfSprite_setTextureRect(men->loading_play, men->loading_play_rect);
    sfRenderWindow_drawSprite(win->window_1, men->loading_play, NULL);
}
