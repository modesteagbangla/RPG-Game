/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** choose_menu.c
*/

#include "../../include/myrpg.h"

void choose_option_menu(st_window *win, menu *men)
{
    if (men->move_men.top < 410) {
        if (sfKeyboard_isKeyPressed(sfKeyDown)) {
            men->v = 1; }
        else if (!sfKeyboard_isKeyPressed(sfKeyDown) && men->v == 1) {
            men->move_men.top += 80;
            men->search_option += 1;
            sfSound_play(men->volume.sdp);
            men->v = 0; } }
    if (men->move_men.top >= 75) {
        if (sfKeyboard_isKeyPressed(sfKeyUp))
            men->x = 1;
        else if (!sfKeyboard_isKeyPressed(sfKeyUp) && men->x == 1) {
            men->move_men.top -= 80;
            men->search_option -= 1;
            sfSound_play(men->volume.sdp);
            men->x = 0; } }
}