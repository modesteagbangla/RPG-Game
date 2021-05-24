/*
** EPITECH PROJECT, 2021
** attack
** File description:
** check_attack_and_soutien
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void m_soutient2(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock7);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect6.left > 0) {
            na->rect6.left = na->rect6.left - 570;
        }
        else {
            na->rect6.left = 2280;
            na->rect6.top += 249;
        }
        if (na->rect6.top == 5727) {
            na->rect6.top = 0, na->atta = 0, check_life_enemie(na, 3, 3);
        }
        sfClock_restart(na->Clock7);
    }
}

void m_fight_pos(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock8);
    if (sfTime_asSeconds(time1) > 0.2f) {
        if (na->rect7.left > 0) {
            na->rect7.left = na->rect7.left - 230;
        }
        else {
            na->rect7.left = 230;
        }
        sfClock_restart(na->Clock8);
    }
}

void m_soutient1(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock9);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect8.left > 0) {
            na->rect8.left = na->rect8.left - 140;
        }
        else {
            na->rect8.left = 560;
            na->rect8.top += 188;
        }
        if (na->rect8.top == 1128) {
            na->rect8.top = 0, na->atta = 0, check_life_enemie(na, 0, 2);
            check_life_cloud(na, -2, 0); }
        sfClock_restart(na->Clock9);
    }
}

void m_fight_pos_s(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock10);
    if (sfTime_asSeconds(time1) > 0.2f) {
        if (na->rect9.left < 934) {
            na->rect9.left = na->rect9.left + 313;
        }
        else {
            na->rect9.left = 0;
        }
        sfClock_restart(na->Clock10);
    }
}
