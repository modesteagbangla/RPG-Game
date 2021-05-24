/*
** EPITECH PROJECT, 2021
** win
** File description:
** cine
*/

#include "../include/war.h"

void sprite_win(win *ci)
{
    ci->t_win = sfTexture_createFromFile("rpg_move/Image/win_cmb33.png", NULL);
    ci->s_win = sfSprite_create();
    sfSprite_setTexture(ci->s_win, ci->t_win, sfTrue);
    sfSprite_setScale (ci->s_win, (sfVector2f){2.7, 3.2});
    ci->Clock1 = sfClock_create();
    ci->rect1.top = 0;
    ci->rect1.left = 0;
    ci->rect1.width = 500;
    ci->rect1.height = 245;
}

void m_win(sfRenderWindow *window, win *ci, int *a)
{
    sfTime time1 = sfClock_getElapsedTime(ci->Clock1);
    if (sfTime_asSeconds(time1) > 0.4f) {
        if (ci->rect1.left < 600) {
            ci->rect1.left = ci->rect1.left + 500;
        }
        else {
            ci->rect1.left = 0;
            ci->rect1.top += 245;
        }
        if (ci->rect1.top == 980) {
            *a = 1;
            ci->rect1.top = 0;
        }
        sfRenderWindow_clear(window, sfBlack);
        sfClock_restart(ci->Clock1);
    }
}

void destroy_win(win *ci)
{
    sfSprite_destroy(ci->s_win);
    sfTexture_destroy(ci->t_win);
    sfClock_destroy(ci->Clock1);
}

void display_winer(Naruto *sa)
{
    put_ask2(sa, "Congratulations", (sfVector2f){300, 100}, 100);
    put_ask2(sa, "You have succeeded in restoring", \
        (sfVector2f){400, 200}, 100);
    put_ask2(sa, "peace in the world.", (sfVector2f){400, 300}, 100);
    put_ask2(sa, "Go and enjoy your work", (sfVector2f){500, 500}, 100);
    return ;
}

void operation_win(Naruto *sa)
{
    int a = 0;
    win *ci = malloc(sizeof(win));
    sprite_win(ci);
    while (sfRenderWindow_isOpen(sa->window)) {
        while (sfRenderWindow_pollEvent(sa->window, &sa->event)) {
            if (sa->event.type == sfEvtClosed)
                sfRenderWindow_close(sa->window); }
        sfRenderWindow_clear(sa->window, sfBlack);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            break; }
        if (a == 0) {
            m_win(sa->window, ci, &a);
            sfRenderWindow_drawSprite(sa->window, ci->s_win, NULL);
            display_winer(sa); }
        if (a == 1) break;
        sfSprite_setTextureRect(ci->s_win, ci->rect1);
        sfRenderWindow_display(sa->window); }
    destroy_win(ci);
    free(ci);
}
