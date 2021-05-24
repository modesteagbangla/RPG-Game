/*
** EPITECH PROJECT, 2021
** war
** File description:
** war
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"
#include "../include/war2.h"

void check_war(Naruto *sa, war1 *na, st_window *win)
{
    m_fight_pos(sa->window, na), m_fight_pos_s(sa->window, na);
    check_role(na), sfRenderWindow_clear(sa->window, sfBlack);
    check_settexture(na), check_setposition(na);
    sfRenderWindow_drawSprite(sa->window, na->s_background, NULL);
    check_attackclaoud(sa, na), check_repost(sa, na), print_cloud(sa, win);
}

void check_lose_cla(Naruto *sa, war1 *na)
{
    if (na->win->cloud.life[0] == '0') {
        sfRenderWindow_clear(sa->window, sfBlack);
        na->atta = 20, na->win->cloud.level1[0] = 'Y';
        put_store(na->win, "you  Lose", (sfVector2f){300, 200}, \
            (sfColor){191, 63, 63, 255});
        put_ask2(sa, "you can try it again", (sfVector2f){400, 500}, 100);
    }
}

st_window *operation_war(Naruto *sa, st_window *win)
{
    war1 *na = malloc(sizeof(war1));
    na->win = win, na->atta = 0, na->repost = 0, na->a1 = 0;
    init_war(na);
    int a = 0;
    while (sfRenderWindow_isOpen(sa->window)) {
        while (sfRenderWindow_pollEvent(sa->window, &sa->event)) {
            if (sa->event.type == sfEvtClosed)
                sfRenderWindow_close(sa->window); }
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) a = 1;
        if ((!sfKeyboard_isKeyPressed(sfKeyEscape)) && a == 1)
            break;
        check_war(sa, na, win), check_lose_cla(sa, na);
        if (na->win->enemie.life[0] == '0') {
            na->win->enemie.life[0] = '4';
            sfRenderWindow_clear(sa->window, sfBlack);
            na->atta = 20, na->win->cloud.level1[0] = 'o';
            operation_win(sa);
            break; }
        sfRenderWindow_display(sa->window); }
    destroy_war(na), free(na);
}