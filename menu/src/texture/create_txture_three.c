/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** create_txture_three.c
*/

#include "../../include/myrpg.h"

void function_create_texture_three(st_window *win, menu *men)
{
    men->store.level_t = sfTexture_createFromFile       \
        ("menu/src/ASSETS/store.png", NULL);
    men->anime.anime_t = sfTexture_createFromFile       \
        ("menu/src/ASSETS/aniii.png", NULL);
    men->tt_t = sfTexture_createFromFile("menu/src/ASSETS/c.png", NULL);
    men->volume.vol_t_moins = sfTexture_createFromFile  \
        ("menu/src/ASSETS/volm.png", NULL);
    men->volume.vol_t_plus = sfTexture_createFromFile   \
        ("menu/src/ASSETS/volp.png", NULL);
    men->volume.flech_t = sfTexture_createFromFile      \
        ("menu/src/ASSETS/d.png", NULL);
    men->volume.sbuffer = sfSoundBuffer_createFromFile("menu/src/son/s.ogg");
    men->volume.sdpb = sfSoundBuffer_createFromFile("menu/src/son/pass.ogg");
    men->epit.epi_t = sfTexture_createFromFile("menu/src/ASSETS/ho.png", NULL);
    men->achat.achat_one_t = sfTexture_createFromFile   \
        ("menu/src/ASSETS/achatt.png", NULL);
    men->achat.achat_two_t = sfTexture_createFromFile   \
        ("menu/src/ASSETS/achatt.png", NULL);
    win->backup = 0;
}