/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** positionn.c
*/

#include "../../include/myrpg.h"

st_window *checker_positionn(st_window *win, menu *men)
{
    if (win->event.key.code == sfKeyRight &&                        \
        win->event.key.type == sfEvtKeyReleased && win->backup == 3 \
        && men->volume.pos.y == 530 && win->g == 5) {
        win->volv = 0;
        men->volume.vrp = men->volume.fp;
        sfSound_setVolume(men->volume.rep, men->volume.vrp);
        return (win); }
    if (win->event.key.code == sfKeyLeft &&                         \
        win->event.key.type == sfEvtKeyReleased && win->backup == 3 \
        && men->volume.pos.y == 530 && win->g == 5) {
        men->volume.vrp = 0;
        sfSound_setVolume(men->volume.rep, men->volume.vrp);
        win->volv = men->volume.fp;
        return (win); }
    return (win);
}
