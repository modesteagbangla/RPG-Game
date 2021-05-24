/*
** EPITECH PROJECT, 2021
** animation
** File description:
** anim
*/

#include "../include/rpg.h"

void lapin_left(Naruto *sa)
{
    sa->t_l_left = sfTexture_createFromFile \
        ("rpg_move/Image/lapin_left.png", NULL);
    sa->s_l_left = sfSprite_create();
    sfSprite_setTexture(sa->s_l_left, sa->t_l_left, sfTrue);
    sfSprite_setScale (sa->s_l_left, (sfVector2f){0.6, 0.6});
    sa->Clock4 = sfClock_create();
    sa->rect5.top = 0;
    sa->rect5.left = 0;
    sa->rect5.width = 73;
    sa->rect5.height = 70;
}

void lapin_right(Naruto *sa)
{
    sa->t_l_right = sfTexture_createFromFile    \
        ("rpg_move/Image/lapin_right.png", NULL);
    sa->s_l_right = sfSprite_create();
    sfSprite_setTexture(sa->s_l_right, sa->t_l_right, sfTrue);
    sfSprite_setScale (sa->s_l_right, (sfVector2f){0.6, 0.6});
    sa->Clock5 = sfClock_create();
    sa->rect6.top = 0;
    sa->rect6.left = 0;
    sa->rect6.width = 73;
    sa->rect6.height = 68;
}

void pnj1(Naruto *sa)
{
    sa->png.t_old1 = sfTexture_createFromFile   \
        ("rpg_move/Image/old_pnj.png", NULL);
    sa->png.s_old1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_old1, sa->png.t_old1, sfTrue);
    sfSprite_setScale (sa->png.s_old1, (sfVector2f){1.8, 1.8});
    sa->png.Clock6 = sfClock_create();
    sa->png.rect11.top = 0;
    sa->png.rect11.left = 0;
    sa->png.rect11.width = 32;
    sa->png.rect11.height = 49;
    sa->png.t_old2 = sfTexture_createFromFile   \
        ("rpg_move/Image/old_pnj.png", NULL);
    sa->png.s_old2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_old2, sa->png.t_old2, sfTrue);
    sfSprite_setScale (sa->png.s_old2, (sfVector2f){1.8, 1.8});
    sa->png.rect12.top = 150;
    sa->png.rect12.left = 0;
    sa->png.rect12.width = 32;
    sa->png.rect12.height = 49;
}

void pnj2(Naruto *sa)
{
    sa->png.t_man1 = sfTexture_createFromFile   \
        ("rpg_move/Image/man_pnj.png", NULL);
    sa->png.s_man1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_man1, sa->png.t_man1, sfTrue);
    sfSprite_setScale (sa->png.s_man1, (sfVector2f){1.8, 1.8});
    sa->png.Clock7 = sfClock_create();
    sa->png.rect13.top = 0;
    sa->png.rect13.left = 0;
    sa->png.rect13.width = 32;
    sa->png.rect13.height = 49;
    sa->png.t_man2 = sfTexture_createFromFile   \
        ("rpg_move/Image/man_pnj.png", NULL);
    sa->png.s_man2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_man2, sa->png.t_man2, sfTrue);
    sfSprite_setScale (sa->png.s_man2, (sfVector2f){1.8, 1.8});
    sa->png.rect14.top = 150;
    sa->png.rect14.left = 0;
    sa->png.rect14.width = 32;
    sa->png.rect14.height = 49;
}

void poulet(Naruto *sa)
{
    sa->png.t_poulet = sfTexture_createFromFile \
        ("rpg_move/Image/poulet1.png", NULL);
    sa->png.s_poulet = sfSprite_create();
    sfSprite_setTexture(sa->png.s_poulet, sa->png.t_poulet, sfTrue);
    sfSprite_setScale (sa->png.s_poulet, (sfVector2f){1.8, 1.8});
    sa->png.Clock8 = sfClock_create();
    sa->png.rect9.top = 62;
    sa->png.rect9.left = 0;
    sa->png.rect9.width = 31;
    sa->png.rect9.height = 30;
    sa->png.t_poulet1 = sfTexture_createFromFile    \
        ("rpg_move/Image/poulet1.png", NULL);
    sa->png.s_poulet1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_poulet1, sa->png.t_poulet1, sfTrue);
    sfSprite_setScale (sa->png.s_poulet1, (sfVector2f){1.8, 1.8});
    sa->png.rect10.top = 33;
    sa->png.rect10.left = 0;
    sa->png.rect10.width = 31;
    sa->png.rect10.height = 30;
}
