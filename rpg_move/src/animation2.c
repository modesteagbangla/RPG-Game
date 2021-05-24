/*
** EPITECH PROJECT, 2021
** anime
** File description:
** animation
*/

#include "../include/rpg.h"

void sprite_papillon1(Naruto *sa)
{
    sa->png.t_pap1 = sfTexture_createFromFile   \
        ("rpg_move/Image/blue_pap.png", NULL);
    sa->png.s_pap1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_pap1, sa->png.t_pap1, sfTrue);
    sfSprite_setScale (sa->png.s_pap1, (sfVector2f){1.8, 1.8});
    sa->png.Clock11 = sfClock_create();
    sa->png.rect15.top = 0;
    sa->png.rect15.left = 0;
    sa->png.rect15.width = 32;
    sa->png.rect15.height = 31;
    sa->png.t_pap2 = sfTexture_createFromFile   \
        ("rpg_move/Image/blue_pap.png", NULL);
    sa->png.s_pap2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_pap2, sa->png.t_pap2, sfTrue);
    sfSprite_setScale (sa->png.s_pap2, (sfVector2f){1.8, 1.8});
    sa->png.rect16.top = 90;
    sa->png.rect16.left = 0;
    sa->png.rect16.width = 32;
    sa->png.rect16.height = 31;
}

void sprite_papillon2(Naruto *sa)
{
    sa->png.t_pap1_2 = sfTexture_createFromFile \
        ("rpg_move/Image/pink_pap.png", NULL);
    sa->png.s_pap1_2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_pap1_2, sa->png.t_pap1_2, sfTrue);
    sfSprite_setScale (sa->png.s_pap1_2, (sfVector2f){1.8, 1.8});
    sa->png.Clock12 = sfClock_create();
    sa->png.rect17.top = 0;
    sa->png.rect17.left = 0;
    sa->png.rect17.width = 32;
    sa->png.rect17.height = 31;
    sa->png.t_pap2_2 = sfTexture_createFromFile \
        ("rpg_move/Image/pink_pap.png", NULL);
    sa->png.s_pap2_2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_pap2_2, sa->png.t_pap2_2, sfTrue);
    sfSprite_setScale (sa->png.s_pap2_2, (sfVector2f){1.8, 1.8});
    sa->png.rect18.top = 90;
    sa->png.rect18.left = 0;
    sa->png.rect18.width = 32;
    sa->png.rect18.height = 31;
}

void sprite_cat1(Naruto *sa)
{
    sa->png.t_cat1 = sfTexture_createFromFile   \
        ("rpg_move/Image/cat.png", NULL);
    sa->png.s_cat1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_cat1, sa->png.t_cat1, sfTrue);
    sfSprite_setScale (sa->png.s_cat1, (sfVector2f){1.8, 1.8});
    sa->png.Clock13 = sfClock_create();
    sa->png.rect19.top = 40;
    sa->png.rect19.left = 0;
    sa->png.rect19.width = 32;
    sa->png.rect19.height = 32;
    sa->png.t_cat2 = sfTexture_createFromFile   \
        ("rpg_move/Image/cat.png", NULL);
    sa->png.s_cat2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_cat2, sa->png.t_cat2, sfTrue);
    sfSprite_setScale (sa->png.s_cat2, (sfVector2f){1.8, 1.8});
    sa->png.rect20.top = 80;
    sa->png.rect20.left = 0;
    sa->png.rect20.width = 32;
    sa->png.rect20.height = 24;
}

void sprite_bateau(Naruto *sa)
{
    sa->png.t_bat1 = sfTexture_createFromFile   \
        ("rpg_move/Image/bateau1.png", NULL);
    sa->png.s_bat1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_bat1, sa->png.t_bat1, sfTrue);
    sfSprite_setScale (sa->png.s_bat1, (sfVector2f){1.5, 1.5});
    sa->png.Clock14 = sfClock_create();
    sa->png.rect21.top = 200;
    sa->png.rect21.left = 0;
    sa->png.rect21.width = 208;
    sa->png.rect21.height = 190;
    sa->png.t_bat2 = sfTexture_createFromFile   \
        ("rpg_move/Image/bateau1.png", NULL);
    sa->png.s_bat2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_bat2, sa->png.t_bat2, sfTrue);
    sfSprite_setScale (sa->png.s_bat2, (sfVector2f){1.5, 1.5});
    sa->png.rect22.top = 400;
    sa->png.rect22.left = 0;
    sa->png.rect22.width = 208;
    sa->png.rect22.height = 185;
}

void sprite_dragon1(Naruto *sa)
{
    sa->png.t_drag1 = sfTexture_createFromFile  \
        ("rpg_move/Image/dragon1.png", NULL);
    sa->png.s_drag1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_drag1, sa->png.t_drag1, sfTrue);
    sfSprite_setScale (sa->png.s_drag1, (sfVector2f){1.5, 1.5});
    sa->png.Clock15 = sfClock_create();
    sa->png.rect23.top = 0;
    sa->png.rect23.left = 0;
    sa->png.rect23.width = 187;
    sa->png.rect23.height = 150;
    sa->png.t_drag2 = sfTexture_createFromFile  \
        ("rpg_move/Image/dragon1.png", NULL);
    sa->png.s_drag2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_drag2, sa->png.t_drag2, sfTrue);
    sfSprite_setScale (sa->png.s_drag2, (sfVector2f){1.5, 1.5});
    sa->png.rect24.top = 310;
    sa->png.rect24.left = 0;
    sa->png.rect24.width = 187;
    sa->png.rect24.height = 150;
}
