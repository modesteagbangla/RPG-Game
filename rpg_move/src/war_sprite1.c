/*
** EPITECH PROJECT, 2021
** war_sprite
** File description:
** sprite_war all sprite part 1
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void sprite_back(war1 *na)
{
    na->t_background = sfTexture_createFromFile \
        ("rpg_move/Image/war.png", NULL);
    na->s_background = sfSprite_create();
    sfSprite_setTexture(na->s_background, na->t_background, sfTrue);
    sfSprite_setScale (na->s_background, (sfVector2f){1, 1});
    na->Clock1 = sfClock_create();
}

void sprite_att1_cloud(war1 *na)
{
    na->t_att1_cloud = sfTexture_createFromFile \
        ("rpg_move/Image/attack_cloud_spe.png", NULL);
    na->s_att1_cloud = sfSprite_create();
    sfSprite_setTexture(na->s_att1_cloud, na->t_att1_cloud, sfTrue);
    sfSprite_setScale (na->s_att1_cloud, (sfVector2f){3, 3});
    na->Clock2 = sfClock_create();
    na->rect1.top = 0;
    na->rect1.left = 1900;
    na->rect1.width = 478;
    na->rect1.height = 154;
}

void sprite_att1_seph(war1 *na)
{
    na->t_att1_seph = sfTexture_createFromFile  \
        ("rpg_move/Image/attack_seph1.png", NULL);
    na->s_att1_seph = sfSprite_create();
    sfSprite_setTexture(na->s_att1_seph, na->t_att1_seph, sfTrue);
    sfSprite_setScale (na->s_att1_seph, (sfVector2f){3, 3});
    na->Clock3 = sfClock_create();
    na->rect2.top = 0;
    na->rect2.left = 0;
    na->rect2.width = 441;
    na->rect2.height = 182;
}

void sprite_att2_seph(war1 *na)
{
    na->t_att2_seph = sfTexture_createFromFile  \
        ("rpg_move/Image/attack_seph2.png", NULL);
    na->s_att2_seph = sfSprite_create();
    sfSprite_setTexture(na->s_att2_seph, na->t_att2_seph, sfTrue);
    sfSprite_setScale (na->s_att2_seph, (sfVector2f){3, 3});
    na->Clock4 = sfClock_create();
    na->rect3.top = 0;
    na->rect3.left = 0;
    na->rect3.width = 270;
    na->rect3.height = 175;
}

void sprite_att2_cloud(war1 *na)
{
    na->t_att2_cloud = sfTexture_createFromFile \
        ("rpg_move/Image/attack_cloud2.png", NULL);
    na->s_att2_cloud = sfSprite_create();
    sfSprite_setTexture(na->s_att2_cloud, na->t_att2_cloud, sfTrue);
    sfSprite_setScale (na->s_att2_cloud, (sfVector2f){3, 3});
    na->Clock5 = sfClock_create();
    na->rect4.top = 0;
    na->rect4.left = 1284;
    na->rect4.width = 321;
    na->rect4.height = 313;
}
