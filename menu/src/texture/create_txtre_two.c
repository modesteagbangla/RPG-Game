/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** create_txtre_two.c
*/

#include "../../include/myrpg.h"

void function_create_texture_twoo(st_window *win, menu *men, int ac, char **av)
{
    men->level.level_t = sfTexture_createFromFile       \
        ("menu/src/ASSETS/level.png", NULL);
    men->song.pre = sfTexture_createFromFile("menu/src/ASSETS/prec.png", NULL);
    if (ac == 2)
        men->volume.repl = sfSoundBuffer_createFromFile(av[1]);
}

void function_create_texture_two(st_window *win, menu *men, int ac, char **av)
{
    men->how_to_play_t = sfTexture_createFromFile       \
        ("menu/src/ASSETS/howy.png", NULL);
    men->loading_t = sfTexture_createFromFile           \
        ("menu/src/ASSETS/chargement_debut.png", NULL);
    men->loading_play_texture = sfTexture_createFromFile        \
        ("menu/src/ASSETS/charg_debt.png", NULL);
    men->play_load_t = sfTexture_createFromFile \
        ("menu/src/ASSETS/loading.png", NULL);
    men->turn_parametre_t = sfTexture_createFromFile    \
        ("menu/src/ASSETS/paramettre.png", NULL);
    men->pi.coeur_t = sfTexture_createFromFile  \
        ("menu/src/ASSETS/coeur.png", NULL);
    men->pi.diamant_t = sfTexture_createFromFile        \
        ("menu/src/ASSETS/diamant.png", NULL);
    men->pi.piece_t = sfTexture_createFromFile  \
        ("menu/src/ASSETS/piece.png", NULL);
    function_create_texture_twoo(win, men, ac, av);
}
