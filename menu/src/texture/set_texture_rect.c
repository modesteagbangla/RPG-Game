/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** set_texture_rect.c
*/

#include "../../include/myrpg.h"

void function_set_texture(st_window *win, menu *men)
{
    sfSprite_setTexture(win->background, win->texture_background, sfTrue);
    sfSprite_setTexture(men->background, men->texture_background, sfTrue);
    sfSprite_setTexture(men->men, men->men_t, sfTrue);
    sfSprite_setTexture(men->more, men->more_texture, sfTrue);
    sfSprite_setTexture(men->debut, men->debut_texture, sfTrue);
    sfSprite_setTexture(men->setting, men->setting_texture, sfTrue);
    sfSprite_setTexture(men->how_to_play, men->how_to_play_t, sfTrue);
    sfSprite_setTexture(men->loading, men->loading_t, sfTrue);
    sfSprite_setTexture(men->loading_play, men->loading_play_texture, sfTrue);
    sfSprite_setTexture(men->hty, men->hty_t, sfTrue);
    sfSprite_setTexture(men->song.prec, men->song.pre, sfTrue);
    sfSprite_setTexture(men->song.next, men->song.ne, sfTrue);
    sfSound_setBuffer(men->volume.sd_g, men->volume.sd_gg);
    sfSound_setBuffer(men->volume.rep, men->volume.repl);
    function_set_txt_two(win, men);
    function_set_position_rect(win, men);
    function_set_rect(win, men);
}
