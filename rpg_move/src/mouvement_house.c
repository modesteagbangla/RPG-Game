/*
** EPITECH PROJECT, 2021
** mouvement_in_house
** File description:
** map house
*/

#include "../include/house.h"

void check_hs_keydown(Naruto *sa, house *co)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 1, sa->time = sfClock_getElapsedTime(sa->Clock);
    move_face(sa->window, sa->time, sa);
    sfSprite_setPosition(sa->s_face, (sfVector2f){x_perso, y_perso});
    if (co->hs_y > -110) co->hs_y = co->hs_y - 0.1;
}

void check_hs_keyup(Naruto *sa, house *co)
{
    int x_perso = 683, y_perso = 384, value = -110 + 600;
    sa->face = 2, sa->time3 = sfClock_getElapsedTime(sa->Clock3);
    move_dos(sa->window, sa->time3, sa);
    sfSprite_setPosition(sa->s_dos, (sfVector2f){x_perso, y_perso});
    if (co->hs_y < 384) co->hs_y = co->hs_y + 0.1;
}

void check_hs_keyleft(Naruto *sa, house *co)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 3, sa->time1 = sfClock_getElapsedTime(sa->Clock1);
    move_gauche(sa->window, sa->time1, sa);
    sfSprite_setPosition(sa->s_gauche, (sfVector2f){x_perso, y_perso});
    if (co->hs_x < 683) co->hs_x += 0.1;
}

void check_hs_keyright(Naruto *sa, house *co)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 4, sa->time2 = sfClock_getElapsedTime(sa->Clock2);
    move_droite(sa->window, sa->time2, sa);
    sfSprite_setPosition(sa->s_droite, (sfVector2f){x_perso, y_perso});
    if (co->hs_x < 600) co->hs_x -= 0.1;
}

void check_hs_direction(Naruto *sa, house *co)
{
    int x_perso = 683, y_perso = 384, i = 0;
    sfSprite_setPosition(sa->s_face, (sfVector2f){683, 384});
    if (sfKeyboard_isKeyPressed(sfKeyDown) && i == 0)
        check_hs_keydown(sa, co), i++;
    else if (sfKeyboard_isKeyPressed(sfKeyUp) && i == 0)
        check_hs_keyup(sa, co), i++;
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && i == 0)
        check_hs_keyleft(sa, co), i++;
    else if (sfKeyboard_isKeyPressed(sfKeyRight) && i == 0)
        check_hs_keyright(sa, co), i++;
}