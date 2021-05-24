/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** position_one.c
*/

#include "../../include/myrpg.h"

// st_window *checker_position_mouse(st_window *win, menu *men)
// {
//     // if (sfMouse_isButtonPressed(sfMouseLeft)) {
//     //     win->ia = 1;
//     // }
    // // if (sfMouse_isButtonPressed(sfMouseLeft)) {
    // //     sfVector2i ai = sfMouse_getPositionRenderWindow(win->window_1);
    // //     sfVector2f mp = sfSprite_getPosition(men->men);
    // //     if (ai.x > (mp.x) && ai.x < (mp.x + 250) && (ai.y > (mp.y) && ai.y < (mp.y + 40)))
//     // }
//     return (win);
// }

st_window *checker_position_one(st_window *win, menu *men)
{
    if (win->event.key.type == sfEvtKeyReleased &&                      \
        win->event.key.code == sfKeyEscape && win->backup == -1) {
        win->backup = 9;
        return (win); }
    if (win->event.key.type == sfEvtKeyReleased &&             \
        win->event.key.code == sfKeySpace && win->backup == -2 \
        && win->menu_pos == 1) {
        win->backup = -21;
        return (win); }
    if (win->event.key.type == sfEvtKeyReleased &&              \
        win->event.key.code == sfKeySpace && win->backup == -21 \
        && win->menu_pos == 1) {
        win->backup = -3;
        sfClock_restart(men->tt);
        return (win); }
    // win = checker_position_mouse(win, men);
    return (win);
}
