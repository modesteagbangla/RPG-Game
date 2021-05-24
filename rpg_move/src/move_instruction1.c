/*
** EPITECH PROJECT, 2021
** move_instruction
** File description:
** move_of_all_animation_in_map
*/

#include "../include/rpg.h"

void move_face(sfRenderWindow *window, sfTime time, Naruto *sa)
{
    if (sfTime_asSeconds(time) > 0.2f) {
        if (sa->rect.left < 144)
            sa->rect.left = sa->rect.left + 72;
        else
            sa->rect.left = 0;
        sfClock_restart(sa->Clock);
    }
}

void move_gauche(sfRenderWindow *window, sfTime time1, Naruto *sa)
{
    if (sfTime_asSeconds(time1) > 0.2f) {
        if (sa->rect1.left < 144)
            sa->rect1.left = sa->rect1.left + 72;
        else
            sa->rect1.left = 0;
        sfClock_restart(sa->Clock1);
    }
}

void move_droite(sfRenderWindow *window, sfTime time2, Naruto *sa)
{
    if (sfTime_asSeconds(time2) > 0.2f) {
        if (sa->rect2.left < 144)
            sa->rect2.left = sa->rect2.left + 72;
        else
            sa->rect2.left = 0;
        sfClock_restart(sa->Clock2);
    }
}

void move_dos(sfRenderWindow *window, sfTime time3, Naruto *sa)
{
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->rect3.left < 144)
            sa->rect3.left = sa->rect3.left + 72;
        else
            sa->rect3.left = 0;
        sfClock_restart(sa->Clock3);
    }
}

void l_left(sfRenderWindow *window, Naruto *sa)
{
    sfTime time3 = sfClock_getElapsedTime(sa->Clock4);
    if (sfTime_asSeconds(time3) > 0.2f) {
        if (sa->rect5.left < 144)
            sa->rect5.left = sa->rect5.left + 73.33;
        else
            sa->rect5.left = 0;
        sfClock_restart(sa->Clock4);
    }
}