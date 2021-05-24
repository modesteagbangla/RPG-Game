/*
** EPITECH PROJECT, 2021
** pause
** File description:
** pause
*/

#include "../include/war.h"

void back_pause(war1 *na)
{
    na->t_backpause = sfTexture_createFromFile  \
        ("rpg_move/Image/pause.png", NULL);
    na->s_backpause = sfSprite_create();
    sfSprite_setTexture(na->s_backpause, na->t_backpause, sfTrue);
    na->t_curs = sfTexture_createFromFile("menu/src/ASSETS/d.png", NULL);
    na->s_curs = sfSprite_create();
    sfSprite_setTexture(na->s_curs, na->t_curs, sfTrue);
    sfSprite_setScale (na->s_curs, (sfVector2f){0.2, 0.2});
}

void destroy_pause(war1 *na)
{
    sfSprite_destroy(na->s_backpause);
    sfTexture_destroy(na->t_backpause);
    sfSprite_destroy(na->s_curs);
    sfTexture_destroy(na->t_curs);
}

int check_close(Naruto *sa, sfVector2f pos, paus *pu)
{
    if (pos.x == 20 && sfKeyboard_isKeyPressed(sfKeySpace)) pu->b = 1;
    else if (pos.x == 20
        && (!sfKeyboard_isKeyPressed(sfKeySpace)) && pu->b == 1) {
        pu->b = 0;
        return (42); }
    if (pos.x == 480 && sfKeyboard_isKeyPressed(sfKeySpace)) pu->c = 1;
    else if (pos.x == 480
        && (!sfKeyboard_isKeyPressed(sfKeySpace)) && pu->c == 1) {
        sa->win->backup = 1, pu->c = 0;
        return (42); }
    if (pos.x == 940 && sfKeyboard_isKeyPressed(sfKeySpace)) pu->d = 1;
    else if (pos.x == 940
        && (!sfKeyboard_isKeyPressed(sfKeySpace)) && pu->d == 1) {
        sa->win->backup = 9, pu->d = 0;
        return (42); }
    return (0);
}

void draw_all_spr(Naruto *sa, war1 *na, sfVector2f pos)
{
    sfRenderWindow_clear(sa->window, sfBlack);
    sfSprite_setPosition(na->s_curs, pos);
    sfRenderWindow_drawSprite(sa->window, na->s_backpause, NULL);
    sfRenderWindow_drawSprite(sa->window, na->s_curs, NULL);
    sfRenderWindow_display(sa->window);
    if (sfKeyboard_isKeyPressed(sfKeyS))
        operation_status(sa);
}

void operate_pause(Naruto *sa)
{
    war1 *na = malloc(sizeof(war1));
    sfVector2f pos = {pos.x = 20, pos.y = 480};
    paus pu = {.b = 0, .c = 0, .d = 0};
    int ch = 0, hc = 0;
    back_pause(na);
    while (sfRenderWindow_isOpen(sa->window)) {
        while (sfRenderWindow_pollEvent(sa->window, &sa->event)) {
            if (sa->event.type == sfEvtClosed)
                sfRenderWindow_close(sa->window); }
        if (pos.x < 940) {
            if (sfKeyboard_isKeyPressed(sfKeyRight)) ch = 1;
            else if (!sfKeyboard_isKeyPressed(sfKeyRight) && ch == 1)
                pos.x += 460, ch = 0; }
        if (pos.x > 20) {
            if (sfKeyboard_isKeyPressed(sfKeyLeft)) hc = 1;
            else if (!sfKeyboard_isKeyPressed(sfKeyLeft) && hc == 1)
                pos.x -= 460, hc = 0; }
        if (check_close(sa, pos, &pu) == 42) break;
        draw_all_spr(sa, na, pos); }
    destroy_pause(na), free(na);
}
