/*
** EPITECH PROJECT, 2021
** sprite for cinematique
** File description:
** sprite for cinematique
*/

#include "../include/cinematic.h"

void sprite_peace(cine *mi)
{
    mi->t_peace = sfTexture_createFromFile("rpg_move/Image/peace.png", NULL);
    mi->s_peace = sfSprite_create();
    sfSprite_setTexture(mi->s_peace, mi->t_peace, sfTrue);
    sfSprite_setScale (mi->s_peace, (sfVector2f){2.9, 2.9});
    mi->Clock2 = sfClock_create();
    mi->rect2.top = 0;
    mi->rect2.left = 0;
    mi->rect2.width = 500;
    mi->rect2.height = 265;
}

void sprite_destruct(cine *mi)
{
    mi->t_destruct = sfTexture_createFromFile("rpg_move/Image/a.png", NULL);
    mi->s_destruct = sfSprite_create();
    sfSprite_setTexture(mi->s_destruct, mi->t_destruct, sfTrue);
    sfSprite_setScale (mi->s_destruct, (sfVector2f){2.9, 4});
    mi->Clock3 = sfClock_create();
    mi->rect3.top = 0;
    mi->rect3.left = 0;
    mi->rect3.width = 500;
    mi->rect3.height = 200;
}

void sprite_combat_c(cine *mi)
{
    mi->t_combat_c = sfTexture_createFromFile   \
        ("rpg_move/Image/cmb11.png", NULL);
    mi->s_combat_c = sfSprite_create();
    sfSprite_setTexture(mi->s_combat_c, mi->t_combat_c, sfTrue);
    sfSprite_setScale (mi->s_combat_c, (sfVector2f){2.9, 2.8});
    mi->Clock1 = sfClock_create();
    mi->rect1.top = 0;
    mi->rect1.left = 0;
    mi->rect1.width = 478;
    mi->rect1.height = 281;
}

void sprite_seph(cine *mi)
{
    mi->t_seph = sfTexture_createFromFile   \
        ("rpg_move/Image/sephiroth.png", NULL);
    mi->s_seph = sfSprite_create();
    sfSprite_setTexture(mi->s_seph, mi->t_seph, sfTrue);
    sfSprite_setScale (mi->s_seph, (sfVector2f){2.9, 2.8});
    mi->Clock4 = sfClock_create();
    mi->rect4.top = 0;
    mi->rect4.left = 0;
    mi->rect4.width = 500;
    mi->rect4.height = 285;
}

void sprite_cloud(cine *mi)
{
    mi->t_cloud = sfTexture_createFromFile("rpg_move/Image/cloud.png", NULL);
    mi->s_cloud = sfSprite_create();
    sfSprite_setTexture(mi->s_cloud, mi->t_cloud, sfTrue);
    sfSprite_setScale (mi->s_cloud, (sfVector2f){2.9, 2.8});
    mi->Clock5 = sfClock_create();
    mi->rect5.top = 0;
    mi->rect5.left = 0;
    mi->rect5.width = 540;
    mi->rect5.height = 360;
}
