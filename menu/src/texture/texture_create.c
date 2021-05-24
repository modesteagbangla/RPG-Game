/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** texture_create.c
*/

#include "../../include/myrpg.h"

void function_create_texture(st_window *win, menu *men, int ac, char **av)
{
    win->mode = sfVideoMode_getDesktopMode();
    win->window_1 = sfRenderWindow_create(win->mode, "MY_RPG",          \
                                        sfFullscreen | sfClose, NULL);
    win->texture_background = sfTexture_createFromFile  \
        ("menu/src/ASSETS/myrpg1.png", NULL);
    men->texture_background = sfTexture_createFromFile  \
        ("menu/src/ASSETS/ifo.png", NULL);
    men->men_t = sfTexture_createFromFile("menu/src/ASSETS/menu.png", NULL);
    men->more_texture = sfTexture_createFromFile        \
        ("menu/src/ASSETS/more.png", NULL);
    men->debut_texture = sfTexture_createFromFile       \
        ("menu/src/ASSETS/rp.png", NULL);
    men->setting_texture = sfTexture_createFromFile     \
        ("menu/src/ASSETS/Setting1.png", NULL);
    men->hty_t = sfTexture_createFromFile("menu/src/ASSETS/howyy.png", NULL);
    men->volume.sd_gg = sfSoundBuffer_createFromFile("menu/src/son/mary.ogg");
    men->song.ne = sfTexture_createFromFile("menu/src/ASSETS/next.png", NULL);
    function_create_texture_two(win, men, ac, av);
    function_create_texture_three(win, men);
}
