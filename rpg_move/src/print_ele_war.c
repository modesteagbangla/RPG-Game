/*
** EPITECH PROJECT, 2021
** print_ele_war
** File description:
** element war
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void print_cloud(Naruto *sa, st_window *win)
{
    put_store(sa->win, sa->win->cloud.life, \
        (sfVector2f){150, -100}, (sfColor){191, 63, 63, 255});
    put_store(sa->win, sa->win->cloud.power,    \
        (sfVector2f){350, -100}, (sfColor){100, 179, 203, 255});
    put_store(sa->win, sa->win->enemie.life,    \
        (sfVector2f){1075, -100}, (sfColor){191, 63, 63, 255});
    put_store(sa->win, sa->win->enemie.power,   \
        (sfVector2f){1275, -100}, (sfColor){100, 179, 203, 255});
}

void check_lose(war1 *na)
{
    sfClock *clock0 = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock0);
    while (sfRenderWindow_isOpen(na->window)) {
        sfRenderWindow_clear(na->window, sfBlack);
        put_store(na->win, "You Lose", (sfVector2f){150, -100}, \
            (sfColor){191, 63, 63, 255});
        if (sfTime_asSeconds(time) > 3)
            break;
        sfRenderWindow_display(na->window);
    }
    sfClock_destroy(clock0);
}
