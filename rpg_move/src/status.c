/*
** EPITECH PROJECT, 2021
** status
** File description:
** status
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void sprite_status(war1 *na)
{
    na->t_status = sfTexture_createFromFile("rpg_move/Image/status.png", NULL);
    na->s_status = sfSprite_create();
    sfSprite_setTexture(na->s_status, na->t_status, sfTrue);
    sfSprite_setScale (na->s_status, (sfVector2f){1, 1});
}

void destroy_status(war1 *na)
{
    sfSprite_destroy(na->s_status);
    sfTexture_destroy(na->t_status);
}

void print_statut(Naruto *sa)
{
    put_store(sa->win, sa->win->cloud.life, \
            (sfVector2f){730, 100}, (sfColor){191, 63, 63, 255});
    put_store(sa->win, sa->win->cloud.power,    \
            (sfVector2f){1200, 350}, (sfColor){100, 179, 203, 255});
    put_store(sa->win, sa->win->cloud.money,    \
            (sfVector2f){1200, 95}, (sfColor){255, 195, 0, 255});
    put_store(sa->win, sa->win->cloud.level1,   \
            (sfVector2f){730, 300}, (sfColor){159, 169, 146, 255});
    put_store(sa->win, sa->win->cloud.level1,   \
            (sfVector2f){730, 500}, (sfColor){159, 169, 146, 255});
}

void operation_status(Naruto *sa)
{
    int a = 0;
    war1 *na = malloc(sizeof(war1));
    sprite_status(na);

    while (sfRenderWindow_isOpen(sa->window)) {
        while (sfRenderWindow_pollEvent(sa->window, &sa->event)) {
            if (sa->event.type == sfEvtClosed)
                sfRenderWindow_close(sa->window); }
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            a = 1; }
        if ((!sfKeyboard_isKeyPressed(sfKeyEscape)) && a == 1) {
            break; }
        sfRenderWindow_clear(sa->window, sfBlack);
        sfRenderWindow_drawSprite(sa->window, na->s_status, NULL);
        print_statut(sa);
        sfRenderWindow_display(sa->window); }
    destroy_status(na);
    free(na);
}
