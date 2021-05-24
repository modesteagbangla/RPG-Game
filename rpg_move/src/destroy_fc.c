/*
** EPITECH PROJECT, 2021
** destroy
** File description:
** destroy_clock_and sprite
*/

#include "../include/rpg.h"

void destroy_clock(Naruto *sa)
{
    sfClock_destroy(sa->Clock);
    sfClock_destroy(sa->Clock1), sfClock_destroy(sa->Clock2);
    sfClock_destroy(sa->Clock3), sfClock_destroy(sa->Clock4);
    sfClock_destroy(sa->Clock5), sfClock_destroy(sa->png.Clock6);
    sfClock_destroy(sa->png.Clock7), sfClock_destroy(sa->png.Clock8);
    sfClock_destroy(sa->png.Clock9), sfClock_destroy(sa->png.Clock11);
    sfClock_destroy(sa->png.Clock10), sfClock_destroy(sa->png.Clock12);
    sfClock_destroy(sa->png.Clock13), sfClock_destroy(sa->png.Clock14);
    sfClock_destroy(sa->png.Clock15), sfClock_destroy(sa->png.Clock16);
}

void destroy_texture(Naruto *sa)
{
    sfSprite_destroy(sa->s_map), sfSprite_destroy(sa->png.s_backg);
    sfTexture_destroy(sa->png.t_backg), sfTexture_destroy(sa->t_map);
    sfTexture_destroy(sa->png.t_poulet), sfTexture_destroy(sa->png.t_poulet1);
    sfTexture_destroy(sa->t_l_right), sfTexture_destroy(sa->t_l_left);
    sfTexture_destroy(sa->t_gauche), sfTexture_destroy(sa->t_droite);
    sfTexture_destroy(sa->t_face), sfTexture_destroy(sa->t_dos);
    sfTexture_destroy(sa->png.t_old1), sfTexture_destroy(sa->png.t_old2);
    sfTexture_destroy(sa->png.t_man1), sfTexture_destroy(sa->png.t_man2);
    sfTexture_destroy(sa->png.t_pap1), sfTexture_destroy(sa->png.t_pap2);
    sfTexture_destroy(sa->png.t_pap1_2), sfTexture_destroy(sa->png.t_pap2_2);
    sfTexture_destroy(sa->png.t_cat1), sfTexture_destroy(sa->png.t_cat2);
    sfTexture_destroy(sa->png.t_bat1), sfTexture_destroy(sa->png.t_bat2);
    sfTexture_destroy(sa->png.t_drag1), sfTexture_destroy(sa->png.t_drag2);
    sfTexture_destroy(sa->png.t_white1), sfTexture_destroy(sa->png.t_white2);
}

void destroy_sprite(Naruto *sa)
{
    sfSprite_destroy(sa->s_face), sfSprite_destroy(sa->s_dos);
    sfSprite_destroy(sa->s_gauche), sfSprite_destroy(sa->s_droite);
    sfSprite_destroy(sa->s_l_left), sfSprite_destroy(sa->s_l_right);
    sfSprite_destroy(sa->png.s_poulet), sfSprite_destroy(sa->png.s_poulet1);
    sfSprite_destroy(sa->png.s_old1), sfSprite_destroy(sa->png.s_old2);
    sfSprite_destroy(sa->png.s_man1), sfSprite_destroy(sa->png.s_man2);
    sfSprite_destroy(sa->png.s_pap1), sfSprite_destroy(sa->png.s_pap2);
    sfSprite_destroy(sa->png.s_pap1_2), sfSprite_destroy(sa->png.s_pap2_2);
    sfSprite_destroy(sa->png.s_cat1), sfSprite_destroy(sa->png.s_cat2);
    sfSprite_destroy(sa->png.s_bat1), sfSprite_destroy(sa->png.s_bat2);
    sfSprite_destroy(sa->png.s_drag1), sfSprite_destroy(sa->png.s_drag2);
    sfSprite_destroy(sa->png.s_white1), sfSprite_destroy(sa->png.s_white2);
}

void destroy(Naruto *sa)
{
    destroy_sprite(sa);
    destroy_texture(sa);
    destroy_clock(sa);
}