/*
** EPITECH PROJECT, 2020
** the sprite
** File description:
** the sprite
*/

#include "../include/rpg.h"
#include "../include/sprite_sound.h"

void sprite_map(Naruto *sa)
{
    sa->t_map = sfTexture_createFromFile    \
        ("rpg_move/Image/map_original.png", NULL);
    sa->s_map = sfSprite_create();
    sfSprite_setTexture(sa->s_map, sa->t_map, sfTrue);
    sfSprite_setScale (sa->s_map, (sfVector2f){1, 1});
    sa->png.Clock9 = sfClock_create();
}

void sprite_background(Naruto *sa)
{
    sa->png.t_backg = sfTexture_createFromFile  \
        ("rpg_move/Image/background_original.png", NULL);
    sa->png.s_backg = sfSprite_create();
    sfSprite_setTexture(sa->png.s_backg, sa->png.t_backg, sfTrue);
    sfSprite_setScale (sa->png.s_backg, (sfVector2f){1, 1});
    sa->png.Clock10 = sfClock_create();
}

void sprite_white(Naruto *sa)
{
    sa->png.t_white1 = sfTexture_createFromFile \
        ("rpg_move/Image/pnj3.png", NULL);
    sa->png.s_white1 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_white1, sa->png.t_white1, sfTrue);
    sfSprite_setScale (sa->png.s_white1, (sfVector2f){1.5, 1.5});
    sa->png.Clock16 = sfClock_create();
    sa->png.rect25.top = 58;
    sa->png.rect25.left = 0;
    sa->png.rect25.width = 46;
    sa->png.rect25.height = 49;
    sa->png.t_white2 = sfTexture_createFromFile \
        ("rpg_move/Image/pnj3.png", NULL);
    sa->png.s_white2 = sfSprite_create();
    sfSprite_setTexture(sa->png.s_white2, sa->png.t_white2, sfTrue);
    sfSprite_setScale (sa->png.s_white2, (sfVector2f){1.5, 1.5});
    sa->png.rect26.top = 106;
    sa->png.rect26.left = 0;
    sa->png.rect26.width = 46;
    sa->png.rect26.height = 49;
}
