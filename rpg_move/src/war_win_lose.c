/*
** EPITECH PROJECT, 2021
** win_lose
** File description:
** check if the player win or lose
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void check_life_enemie(war1 *na, int a, int b)
{
    if (na->win->enemie.life[0] != '0' && na->win->enemie.life[0] - a >= '0')
        na->win->enemie.life[0] = na->win->enemie.life[0] - a;
    else if (na->win->enemie.life[0] - a < '0') na->win->enemie.life[0] = '0';
    if (na->win->cloud.power[0] != '0' && na->win->cloud.power[0] - b >= '0')
        na->win->cloud.power[0] = na->win->cloud.power[0] - b;
    else if (na->win->cloud.power[0] - b < '0') na->win->cloud.power[0] = '0';
    return;
}

void check_life_cloud(war1 *na, int a, int b)
{
    if (na->win->cloud.life[0] > '0' && na->win->cloud.life[0] - a >= '0')
        na->win->cloud.life[0] = na->win->cloud.life[0] - a;
    else if (na->win->cloud.life[0] - a < 0) na->win->cloud.life[0] = '0';
    if (na->win->enemie.power[0] > '0' && na->win->enemie.power[0] - b >= '0')
        na->win->enemie.power[0] = na->win->enemie.power[0] - b;
    else if (na->win->enemie.power[0] - b < '0')
        na->win->enemie.power[0] = '0';
}