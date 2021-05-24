/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** controle_action.c
*/

#include "../../include/myrpg.h"

st_window *checker_position_three(st_window *win, menu *men)
{
    if ((win->event.key.code == sfKeyEnter) &&   \
        win->event.key.type == sfEvtKeyReleased &&  \
        win->backup == 1 && win->menu_pos == 5) {
        win->backup = 2;
        return (win); }
    if (win->event.key.code == sfKeyEscape &&       \
        win->event.key.type == sfEvtKeyReleased &&  \
        win->backup == 2 && win->menu_pos == 5) {
        win->backup = 1;
        return (win); }
    if (win->event.key.code == sfKeyEnter &&        \
        win->event.key.type == sfEvtKeyReleased &&  \
        win->backup == 1 && win->menu_pos == 4) {
        win->backup = 3;
        men->volume.pos.x = -10, men->volume.pos.y = 230;
        return (win); }
    return (win);
}
