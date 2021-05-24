/*
** EPITECH PROJECT, 2021
** cloud
** File description:
** sprite
*/

#include "../include/rpg.h"

void sprite_face(Naruto *sa)
{
    sa->t_face = sfTexture_createFromFile   \
        ("rpg_move/Image/move_face.png", NULL);
    sa->s_face = sfSprite_create();
    sfSprite_setTexture(sa->s_face, sa->t_face, sfTrue);
    sfSprite_setScale (sa->s_face, (sfVector2f){1, 1});
    sa->Clock = sfClock_create();
    sa->rect.top = 0;
    sa->rect.left = 0;
    sa->rect.width = 72;
    sa->rect.height = 75;
}

void sprite_gauche(Naruto *sa)
{
    sa->t_gauche = sfTexture_createFromFile \
        ("rpg_move/Image/move_left.png", NULL);
    sa->s_gauche = sfSprite_create();
    sfSprite_setTexture(sa->s_gauche, sa->t_gauche, sfTrue);
    sfSprite_setScale (sa->s_gauche, (sfVector2f){1, 1});
    sa->Clock1 = sfClock_create();
    sa->rect1.top = 0;
    sa->rect1.left = 0;
    sa->rect1.width = 72;
    sa->rect1.height = 75;
}

void sprite_droite(Naruto *sa)
{
    sa->t_droite = sfTexture_createFromFile \
        ("rpg_move/Image/move_right.png", NULL);
    sa->s_droite = sfSprite_create();
    sfSprite_setTexture(sa->s_droite, sa->t_droite, sfTrue);
    sfSprite_setScale (sa->s_droite, (sfVector2f){1, 1});
    sa->Clock2 = sfClock_create();
    sa->rect2.top = 0;
    sa->rect2.left = 0;
    sa->rect2.width = 72;
    sa->rect2.height = 76;
}

void sprite_dos(Naruto *sa)
{
    sa->t_dos = sfTexture_createFromFile    \
        ("rpg_move/Image/move_back.png", NULL);
    sa->s_dos = sfSprite_create();
    sfSprite_setTexture(sa->s_dos, sa->t_dos, sfTrue);
    sfSprite_setScale(sa->s_dos, (sfVector2f){1, 1});
    sa->Clock3 = sfClock_create();
    sa->rect3.top = 0;
    sa->rect3.left = 0;
    sa->rect3.width = 73;
    sa->rect3.height = 76;
}