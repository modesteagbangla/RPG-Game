/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_or.c
*/

#include "../../include/myrpg.h"

st_window *checker_position_or(st_window *win, menu *men)
{
    if (win->event.key.code == sfKeyEscape &&                       \
        win->event.key.type == sfEvtKeyReleased && win->backup == 3 \
        && win->menu_pos == 4) {
        win->backup = 1;
        return (win); }
    if (win->event.key.code == sfKeyEnter &&                        \
        win->event.key.type == sfEvtKeyReleased && win->backup == 1 \
        && win->menu_pos == 6) {
        win->backup = 9;
        return (win); }
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfVector2i ai = sfMouse_getPositionRenderWindow(win->window_1);
        sfVector2f mp = sfSprite_getPosition(men->men);
        if ((ai.x > (mp.x) && ai.x < (mp.x + 300) && (ai.y > (mp.y) && ai.y < (mp.y + 40))) && (win->backup == 1 \
        && win->menu_pos == 6))
            exit (0);
    }
    return (win);
}
