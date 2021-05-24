/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** store_buy_power.c
*/

#include "../../include/myrpg.h"

void buy_power(st_window *win, menu *men)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        win->mouse = sfMouse_getPositionRenderWindow(win->window_1);
        if (win->mouse.x > 1187 && win->mouse.x < 1225 &&       \
            win->mouse.y > 510 && win->mouse.y <= 565) {
            win->score_power = 1;
            sfSprite_setScale(men->achat.achat_two, (sfVector2f){1.2, 1.2}); }
    }
    else if (!sfMouse_isButtonPressed(sfMouseLeft) && win->score_power == 1) {
        win->n2 += 1;
        win->score_power = 0;
        if (win->n2 <= 9 && (win->cloud.money[0] != '0')) {
            win->cloud.power[0] = win->cloud.power[0] + 1;
            win->cloud.money[0] = win->cloud.money[0] - 1; } }
}
