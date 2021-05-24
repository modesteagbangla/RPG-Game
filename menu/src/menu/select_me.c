/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** select_me.c
*/

#include "../../include/myrpg.h"

void select_setting(menu *men, st_window *win)
{
    if (men->seeting_time.microseconds > 70000) {
        men->setting_rect.left += 200;
        if (men->setting_rect.left == 2200)
            men->setting_rect.left = 0;
        sfClock_restart(men->setting_clock); }
    if (men->volume.pos.y >= 230 && men->volume.pos.y < 530) {
        if (sfKeyboard_isKeyPressed(sfKeyDown))
            men->song.i = 1;
        else if (!sfKeyboard_isKeyPressed(sfKeyDown) && men->song.i == 1) {
            if (men->volume.pos.y >= 230 && men->volume.pos.y < 530) {
                men->volume.pos.y += 150;
                men->song.i = 0; } } }
    if (men->volume.pos.y <= 530 && men->volume.pos.y > 230) {
        if (sfKeyboard_isKeyPressed(sfKeyUp))
            men->song.j = 1;
        else if (!sfKeyboard_isKeyPressed(sfKeyUp) && men->song.j == 1) {
            men->volume.pos.y -= 150;
            men->song.j = 0; } }
    set_vol(men, win);
}