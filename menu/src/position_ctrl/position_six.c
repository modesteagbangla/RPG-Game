/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_six.c
*/

#include "../../include/myrpg.h"

st_window *checker_position_six(st_window *win, menu *men)
{
    if (win->event.key.code == sfKeyEscape &&                           \
        win->event.key.type == sfEvtKeyReleased && win->backup == -6    \
        && win->menu_pos == 3) {
        win->backup = 1;
        return (win); }
    if (win->event.key.code == sfKeyRight &&                        \
        win->event.key.type == sfEvtKeyReleased && win->backup == 3 \
        && men->volume.pos.y == 230) {
        if (win->volv > 10 && men->volume.pos.y != 530)
            win->volv -= 5, men->volume.fp = win->volv;
        return (win); }
    if (win->event.key.code == sfKeyLeft &&                         \
        win->event.key.type == sfEvtKeyReleased && win->backup == 3 \
        && men->volume.pos.y == 230) {
        if (win->volv < 100 && men->volume.pos.y != 530)
            win->volv += 5, men->volume.fp = win->volv;
        return (win); }
    win = checker_positionn(win, men);
    return (win);
}
