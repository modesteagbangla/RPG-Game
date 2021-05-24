/*
** EPITECH PROJECT, 2021
** check_turn
** File description:
** managment of turn and init sprite
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"
#include "../include/check_turn.h"

void init_war(war1 *na)
{
    sprite_back(na);
    sprite_att1_cloud(na);
    sprite_att1_seph(na);
    sprite_att2_seph(na);
    sprite_att2_cloud(na);
    sprite_att3_seph(na);
    sprite_soutient2(na);
    sprite_pos_fight(na);
    sprite_soutient1(na);
    sprite_fight_pos_s(na);
}

void check_role(war1 *na)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) && na->atta == 0 && na->a1 == 0)
        na->atta = 1, na->a1 = 10;
    if (sfKeyboard_isKeyPressed(sfKeyZ) && na->atta == 0 && na->a1 == 0)
        na->atta = 2, na->a1 = 10;
    if (sfKeyboard_isKeyPressed(sfKeyE) && na->atta == 0 && na->a1 == 0)
        na->atta = 3, na->a1 = 10;
    if (sfKeyboard_isKeyPressed(sfKeyR) && na->atta == 0 && na->a1 == 0)
        na->atta = 4, na->a1 = 10;
    int rd = rand() % 4;
    if (na->a1 == 10 && rd == 1 && na->atta == 0 && na->repost == 0)
        na->repost = 1;
    if (na->a1 == 10 && rd == 2 && na->atta == 0 && na->repost == 0)
        na->repost = 2;
    if (na->a1 == 10 && rd == 3 && na->atta == 0 && na->repost == 0)
        na->repost = 3;
}