/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** store_buy_life.c
*/

#include "../../include/myrpg.h"

void buy_life(st_window *win, menu *men)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        win->mouse = sfMouse_getPositionRenderWindow(win->window_1);
        if (win->mouse.x > 477 && win->mouse.x < 515 && win->mouse.y > 510 \
            && win->mouse.y <= 565) {
            win->score_life = 1;
            sfSprite_setScale(men->achat.achat_one, (sfVector2f){1.2, 1.2}); }
    }
    else if (!sfMouse_isButtonPressed(sfMouseLeft) && win->score_life == 1) {
        win->n1 += 1;
        win->score_life = 0;
        if (win->n1 <= 9 && (win->cloud.money[0] != '0')) {
            win->cloud.life[0] = win->cloud.life[0] + 1;
            win->cloud.money[0] = win->cloud.money[0] - 1; } }
}
