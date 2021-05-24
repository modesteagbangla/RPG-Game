/*
** EPITECH PROJECT, 2021
** destroy_war
** File description:
** destroy all element
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void destroy_war(war1 *na)
{
    sfSprite_destroy(na->s_background), sfTexture_destroy(na->t_background);
    sfSprite_destroy(na->s_att1_cloud), sfTexture_destroy(na->t_att1_cloud);
    sfSprite_destroy(na->s_att1_seph), sfTexture_destroy(na->t_att1_seph);
    sfSprite_destroy(na->s_att2_seph), sfTexture_destroy(na->t_att2_seph);
    sfSprite_destroy(na->s_att2_cloud), sfTexture_destroy(na->t_att2_cloud);
    sfSprite_destroy(na->s_att3_seph), sfTexture_destroy(na->t_att3_seph);
    sfSprite_destroy(na->s_soutient2), sfTexture_destroy(na->t_soutient2);
    sfSprite_destroy(na->s_pos_fight), sfTexture_destroy(na->t_pos_fight);
    sfSprite_destroy(na->s_sou1), sfTexture_destroy(na->t_sou1);
    sfSprite_destroy(na->s_pos_fight_s), sfTexture_destroy(na->t_pos_fight_s);
    sfClock_destroy(na->Clock1), sfClock_destroy(na->Clock2);
    sfClock_destroy(na->Clock3), sfClock_destroy(na->Clock4);
    sfClock_destroy(na->Clock5), sfClock_destroy(na->Clock6);
    sfClock_destroy(na->Clock7), sfClock_destroy(na->Clock8);
    sfClock_destroy(na->Clock9), sfClock_destroy(na->Clock10);
}