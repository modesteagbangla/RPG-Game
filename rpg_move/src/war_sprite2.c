/*
** EPITECH PROJECT, 2021
** war
** File description:
** war_sprite2
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void sprite_att3_seph(war1 *na)
{
    na->t_att3_seph = sfTexture_createFromFile  \
        ("rpg_move/Image/attack_seph3.png", NULL);
    na->s_att3_seph = sfSprite_create();
    sfSprite_setTexture(na->s_att3_seph, na->t_att3_seph, sfTrue);
    sfSprite_setScale (na->s_att3_seph, (sfVector2f){3, 3});
    na->Clock6 = sfClock_create();
    na->rect5.top = 0;
    na->rect5.left = 0;
    na->rect5.width = 447;
    na->rect5.height = 350;
}

void sprite_soutient2(war1 *na)
{
    na->t_soutient2 = sfTexture_createFromFile  \
        ("rpg_move/Image/ultime.png", NULL);
    na->s_soutient2 = sfSprite_create();
    sfSprite_setTexture(na->s_soutient2, na->t_soutient2, sfTrue);
    sfSprite_setScale (na->s_soutient2, (sfVector2f){3, 3});
    na->Clock7 = sfClock_create();
    na->rect6.top = 0;
    na->rect6.left = 2280;
    na->rect6.width = 570;
    na->rect6.height = 249;
}

void sprite_pos_fight(war1 *na)
{
    na->t_pos_fight = sfTexture_createFromFile  \
        ("rpg_move/Image/combat.png", NULL);
    na->s_pos_fight = sfSprite_create();
    sfSprite_setTexture(na->s_pos_fight, na->t_pos_fight, sfTrue);
    sfSprite_setScale (na->s_pos_fight, (sfVector2f){1, 1});
    na->Clock8 = sfClock_create();
    na->rect7.top = 0;
    na->rect7.left = 690.75;
    na->rect7.width = 230;
    na->rect7.height = 165;
}

void sprite_soutient1(war1 *na)
{
    na->t_sou1 = sfTexture_createFromFile   \
        ("rpg_move/Image/soutient1.png", NULL);
    na->s_sou1 = sfSprite_create();
    sfSprite_setTexture(na->s_sou1, na->t_sou1, sfTrue);
    sfSprite_setScale (na->s_sou1, (sfVector2f){3, 3});
    na->Clock9 = sfClock_create();
    na->rect8.top = 0;
    na->rect8.left = 560;
    na->rect8.width = 140;
    na->rect8.height = 188;
}

void sprite_fight_pos_s(war1 *na)
{
    na->t_pos_fight_s = sfTexture_createFromFile    \
        ("rpg_move/Image/c2.png", NULL);
    na->s_pos_fight_s = sfSprite_create();
    sfSprite_setTexture(na->s_pos_fight_s, na->t_pos_fight_s, sfTrue);
    sfSprite_setScale (na->s_pos_fight_s, (sfVector2f){1, 1});
    na->Clock10 = sfClock_create();
    na->rect9.top = 0;
    na->rect9.left = 0;
    na->rect9.width = 313;
    na->rect9.height = 174;
}