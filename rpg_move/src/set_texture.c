/*
** EPITECH PROJECT, 2021
** settexture
** File description:
** set_texture of all animation
*/

#include "../include/rpg.h"

void settexture_cloud(Naruto *sa)
{
    sfSprite_setTextureRect(sa->s_face, sa->rect);
    sfSprite_setTextureRect(sa->s_gauche, sa->rect1);
    sfSprite_setTextureRect(sa->s_droite, sa->rect2);
    sfSprite_setTextureRect(sa->s_dos, sa->rect3);
}

void settexture_othe_ani(Naruto *sa)
{
    sfSprite_setTextureRect(sa->s_l_left, sa->rect5);
    sfSprite_setTextureRect(sa->s_l_right, sa->rect6);
    sfSprite_setTextureRect(sa->png.s_poulet, sa->png.rect9);
    sfSprite_setTextureRect(sa->png.s_poulet1, sa->png.rect10);
    sfSprite_setTextureRect(sa->png.s_old1, sa->png.rect11);
    sfSprite_setTextureRect(sa->png.s_old2, sa->png.rect12);
    sfSprite_setTextureRect(sa->png.s_man1, sa->png.rect13);
    sfSprite_setTextureRect(sa->png.s_man2, sa->png.rect14);
    sfSprite_setTextureRect(sa->png.s_pap1, sa->png.rect15);
    sfSprite_setTextureRect(sa->png.s_pap2, sa->png.rect16);
    sfSprite_setTextureRect(sa->png.s_pap1_2, sa->png.rect17);
    sfSprite_setTextureRect(sa->png.s_pap2_2, sa->png.rect18);
    sfSprite_setTextureRect(sa->png.s_cat1, sa->png.rect19);
    sfSprite_setTextureRect(sa->png.s_cat2, sa->png.rect20);
    sfSprite_setTextureRect(sa->png.s_bat1, sa->png.rect21);
    sfSprite_setTextureRect(sa->png.s_bat2, sa->png.rect22);
    sfSprite_setTextureRect(sa->png.s_drag1, sa->png.rect23);
    sfSprite_setTextureRect(sa->png.s_drag2, sa->png.rect24);
    sfSprite_setTextureRect(sa->png.s_white1, sa->png.rect25);
    sfSprite_setTextureRect(sa->png.s_white2, sa->png.rect26);
}
