/*
** EPITECH PROJECT, 2021
** check_attack
** File description:
** check_attak
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void move_att1(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock2);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect1.left > 0) {
            na->rect1.left = na->rect1.left - 478;
        }
        else {
            na->rect1.left = 1912, na->rect1.top += 154; }
        if (na->rect1.top == 770) {
            na->rect1.top = 0, na->atta = 0, check_life_enemie(na, 1, 0);
        }
        sfClock_restart(na->Clock2);
    }
}

void m_att1_seph(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock3);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect2.left < 552) {
            na->rect2.left = na->rect2.left + 441;
        }
        else {
            na->rect2.left = 0;
            na->rect2.top += 182;
        }
        if (na->rect2.top > 1638) {
            na->rect2.top = 0, na->a1 = 0, na->repost = 0;
            check_life_cloud(na, 2, 2);
        }
        sfClock_restart(na->Clock3);
    }
}

void m_att2_seph(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock4);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect3.left < 338) {
            na->rect3.left = na->rect3.left + 270;
        }
        else {
            na->rect3.left = 0;
            na->rect3.top += 175;
        }
        if (na->rect3.top == 1050) {
            na->rect3.top = 0, na->a1 = 0, na->repost = 0;
            check_life_cloud(na, 1, 0);
        }
        sfClock_restart(na->Clock4);
    }
}

void m_att2(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock5);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect4.left > 0) {
            na->rect4.left = na->rect4.left - 321;
        }
        else {
            na->rect4.left = 1284;
            na->rect4.top += 313;
        }
        if (na->rect4.top > 8764) {
            na->rect4.top = 0, na->atta = 0, check_life_enemie(na, 2, 2);
        }
        sfClock_restart(na->Clock5);
    }
}

void m_att3_seph(sfRenderWindow *window, war1 *na)
{
    sfTime time1 = sfClock_getElapsedTime(na->Clock6);
    if (sfTime_asSeconds(time1) > 0.09f) {
        if (na->rect5.left < 1788) {
            na->rect5.left = na->rect5.left + 447;
        }
        else {
            na->rect5.left = 0;
            na->rect5.top += 350;
        }
        if (na->rect5.top == 4550) {
            na->rect5.top = 0, na->a1 = 0, na->repost = 0;
            check_life_cloud(na, 1, 0);
        }
        sfClock_restart(na->Clock6);
    }
}
