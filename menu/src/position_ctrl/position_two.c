/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_two.c
*/

#include "../../include/myrpg.h"

st_window *checker_position_two(st_window *win, menu *men)
{
    if (win->event.key.type == sfEvtKeyReleased &&                  \
        win->event.key.code == sfKeyEscape && win->backup == -2 &&  \
        win->menu_pos == 1) {
        win->backup = 1;
        return (win); }
    if (win->event.key.type == sfEvtKeyReleased &&                      \
        win->event.key.code == sfKeySpace && win->backup == -1) {
        win->backup = 1;
        return (win); }
    if (win->event.key.type == sfEvtKeyReleased &&            \
        win->event.key.code == sfKeyEnter && win->backup == 1 \
        && win->menu_pos == 1) {
        win->backup = -2;
        return (win); }
    return (win);
}
