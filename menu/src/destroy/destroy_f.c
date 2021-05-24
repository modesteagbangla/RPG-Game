/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** destroy_f.c
*/

#include "../../include/myrpg.h"

void my_destroy_or(st_window *win, menu *men)
{
    sfSprite_destroy(men->song.next);
    sfSprite_destroy(men->song.prec);
    sfTexture_destroy(men->song.ne);
    sfTexture_destroy(men->song.pre);
    sfSound_destroy(men->volume.rep);
    sfSoundBuffer_destroy(men->volume.repl);
}