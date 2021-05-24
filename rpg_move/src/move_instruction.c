/*
** EPITECH PROJECT, 2020
** the move
** File description:
** instruction
*/

#include "../include/rpg.h"
#include "../include/move_instruction.h"

void move_pap2(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock12);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect17.left < 64)
            sa->png.rect17.left = sa->png.rect17.left + 32;
        else
            sa->png.rect17.left = 0;
        sfClock_restart(sa->png.Clock12);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect18.left < 64)
            sa->png.rect18.left = sa->png.rect18.left + 32;
        else
            sa->png.rect18.left = 0;
        sfClock_restart(sa->png.Clock12);
    }
}

void move_cat1(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock13);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect19.left < 64)
            sa->png.rect19.left = sa->png.rect19.left + 32;
        else
            sa->png.rect19.left = 0;
        sfClock_restart(sa->png.Clock13);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect20.left < 64)
            sa->png.rect20.left = sa->png.rect20.left + 32;
        else
            sa->png.rect20.left = 0;
        sfClock_restart(sa->png.Clock13);
    }
}

void move_bat(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock14);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect21.left < 624)
            sa->png.rect21.left = sa->png.rect21.left + 208;
        else
            sa->png.rect21.left = 0;
        sfClock_restart(sa->png.Clock14);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect22.left < 624)
            sa->png.rect22.left = sa->png.rect22.left + 208;
        else
            sa->png.rect22.left = 0;
        sfClock_restart(sa->png.Clock14);
    }
}

void move_drag1(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock15);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect23.left < 377)
            sa->png.rect23.left = sa->png.rect23.left + 189;
        else
            sa->png.rect23.left = 0;
        sfClock_restart(sa->png.Clock15);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect24.left < 377)
            sa->png.rect24.left = sa->png.rect24.left + 189;
        else
            sa->png.rect24.left = 0;
        sfClock_restart(sa->png.Clock15);
    }
}

void move_white(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->png.Clock16);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect25.left < 93)
            sa->png.rect25.left = sa->png.rect25.left + 47;
        else
            sa->png.rect25.left = 0;
        sfClock_restart(sa->png.Clock16);
    }
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->png.rect26.left < 93)
            sa->png.rect26.left = sa->png.rect26.left + 47;
        else
            sa->png.rect26.left = 0;
        sfClock_restart(sa->png.Clock16);
    }
}
