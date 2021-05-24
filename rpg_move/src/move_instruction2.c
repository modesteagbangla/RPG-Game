/*
** EPITECH PROJECT, 2021
** move_insctruction.c
** File description:
** move_all_animation
*/

#include "../include/rpg.h"

void l_right(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->Clock5);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->rect6.left < 144)
            sa->rect6.left = sa->rect6.left + 73.33;
        else
            sa->rect6.left = 0;
        sfClock_restart(sa->Clock5);
    }
}

void move_pnj1(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock6);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect11.left < 64)
            sa->png.rect11.left = sa->png.rect11.left + 32.80;
        else
            sa->png.rect11.left = 0;
        sfClock_restart(sa->png.Clock6);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect12.left < 64)
            sa->png.rect12.left = sa->png.rect12.left + 32.80;
        else
            sa->png.rect12.left = 0;
        sfClock_restart(sa->png.Clock6);
    }
}

void move_pnj2(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock7);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect13.left < 64)
            sa->png.rect13.left = sa->png.rect13.left + 32;
        else
            sa->png.rect13.left = 0;
        sfClock_restart(sa->png.Clock7);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect14.left < 64)
            sa->png.rect14.left = sa->png.rect14.left + 32;
        else
            sa->png.rect14.left = 0;
        sfClock_restart(sa->png.Clock7);
    }
}

void move_poulet(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock8);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect9.left < 64)
            sa->png.rect9.left = sa->png.rect9.left + 32;
        else
            sa->png.rect9.left = 0;
        sfClock_restart(sa->png.Clock8);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect10.left < 64)
            sa->png.rect10.left = sa->png.rect10.left + 32;
        else
            sa->png.rect10.left = 0;
        sfClock_restart(sa->png.Clock8);
    }
}

void move_pap(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock11);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect15.left < 64)
            sa->png.rect15.left = sa->png.rect15.left + 32;
        else
            sa->png.rect15.left = 0;
        sfClock_restart(sa->png.Clock11);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect16.left < 64)
            sa->png.rect16.left = sa->png.rect16.left + 32;
        else
            sa->png.rect16.left = 0;
        sfClock_restart(sa->png.Clock11);
    }
}
