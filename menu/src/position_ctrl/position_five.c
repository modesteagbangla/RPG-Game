/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_five.c
*/

#include "../../include/myrpg.h"

st_window *checker_position_five(st_window *win, menu *men)
{
    if (win->event.key.code == sfKeyEnter &&                        \
        win->event.key.type == sfEvtKeyReleased && win->backup == 1 \
        && win->menu_pos == 2) {
        win->backup = -5;
        return (win); }
    if (win->event.key.code == sfKeyEscape &&                           \
        win->event.key.type == sfEvtKeyReleased && win->backup == -5    \
        && win->menu_pos == 2) {
        win->backup = 1;
        return (win); }
    if (win->event.key.code == sfKeyEnter &&                        \
        win->event.key.type == sfEvtKeyReleased && win->backup == 1 \
        && win->menu_pos == 3) {
        win->backup = -6;
        return (win); }
    win = checker_position_six(win, men);
    return (win);
}
