/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** settings.c
*/

#include "../../include/myrpg.h"

int display_setting(menu *men, st_window *win)
{
    men->seeting_time = sfClock_getElapsedTime(men->setting_clock);
    position_sett(men, win);
    sfRenderWindow_clear(win->window_1, sfBlack);
    sfRenderWindow_drawSprite(win->window_1, men->setting, NULL);
    select_setting(men, win);
    set_music(men, win);
    sfSound_setVolume(men->volume.sound, win->volv);
    sfSprite_setPosition(men->volume.flech_s, men->volume.pos);
    sfSprite_setTextureRect(men->turn_parametre, men->setting_rect);
    sfRenderWindow_drawSprite(win->window_1, men->turn_parametre, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->volume.vol_s_plus, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->volume.vol_s_moins, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->volume.flech_s, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->song.prec, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->song.next, NULL);
    return (0);
}
