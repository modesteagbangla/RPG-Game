/*
** EPITECH PROJECT, 2021
** direction
** File description:
** check_direction_player
*/

#include "../include/rpg.h"

void check_keydown(sfRenderWindow *window, Naruto *sa, float *fx, float *fy)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 1, sa->time = sfClock_getElapsedTime(sa->Clock);
    move_face(window, sa->time, sa);
    sfSprite_setPosition(sa->s_face, (sfVector2f){x_perso, y_perso});
    if (*fy > -2000 && check_obs(sa, x_perso, y_perso) != 42)
        *fy -= 0.5, sa->y_map -= 0.5;
    if (check_obs(sa, x_perso, y_perso) == 42)
        *fy += 0.5, sa->y_map += 0.5;
}

void check_keyup(sfRenderWindow *window, Naruto *sa, float *fx, float *fy)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 2, sa->time3 = sfClock_getElapsedTime(sa->Clock3);
    move_dos(window, sa->time3, sa);
    sfRenderWindow_drawSprite(window, sa->s_dos, NULL);
    sfSprite_setPosition(sa->s_dos, (sfVector2f){x_perso, y_perso});
    if (*fy < 380 && check_obs(sa, x_perso, y_perso) != 42)
        *fy += 0.5, sa->y_map += 0.5;
    if (check_obs(sa, x_perso, y_perso) == 42)
        *fy -= 0.5, sa->y_map -= 0.5;
}

void check_keyleft(sfRenderWindow *window, Naruto *sa, float *fx, float *fy)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 3, sa->time1 = sfClock_getElapsedTime(sa->Clock1);
    move_gauche(window , sa->time1, sa);
    sfRenderWindow_drawSprite(window, sa->s_gauche, NULL);
    sfSprite_setPosition(sa->s_gauche, (sfVector2f){x_perso, y_perso});
    if (*fx < 680 && check_obs(sa, x_perso, y_perso) != 42)
        *fx += 0.5, sa->x_map += 0.5;
    if (check_obs(sa, x_perso, y_perso) == 42)
        *fx -= 0.5, sa->x_map -= 0.5;
}

void check_keyright(sfRenderWindow *window, Naruto *sa, float *fx, float *fy)
{
    int x_perso = 683, y_perso = 384;
    sa->face = 4, sa->time2 = sfClock_getElapsedTime(sa->Clock2);
    move_droite(window, sa->time2, sa);
    sfRenderWindow_drawSprite(window, sa->s_droite, NULL);
    sfSprite_setPosition(sa->s_droite, (sfVector2f){x_perso, y_perso});
    if (*fx > -3400 && check_obs(sa, x_perso, y_perso) != 42)
        *fx -= 0.5, sa->x_map -= 0.5;
    if (check_obs(sa, x_perso, y_perso) == 42)
        *fx += 0.5, sa->x_map += 0.5;
}

void check_direction(sfRenderWindow *window, Naruto *sa, float *fx, float *fy)
{
    int x_perso = 683, y_perso = 384, i = 0;
    sfSprite_setPosition(sa->s_face, (sfVector2f){683, 384});
    if (sfKeyboard_isKeyPressed(sfKeyDown) && i == 0)
        check_keydown(window, sa, fx, fy), i++;
    else if (sfKeyboard_isKeyPressed(sfKeyUp) && i == 0)
        check_keyup(window, sa, fx, fy), i++;
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && i == 0)
        check_keyleft(window, sa, fx, fy), i++;
    else if (sfKeyboard_isKeyPressed(sfKeyRight) && i == 0)
        check_keyright(window, sa, fx, fy), i++;
}