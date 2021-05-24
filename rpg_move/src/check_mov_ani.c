/*
** EPITECH PROJECT, 2021
** check_move
** File description:
** move of independing animation
*/

#include "../include/rpg.h"

void check_rabbit(Naruto *sa, sfRenderWindow *window)
{
    float y = 780 + sa->y_map, x = sa->x_map + 680;

    if (sa->anima.x_lap_dr < 1100) {
        float x_ = (sa->anima.x_lap_dr += 0.1);
        sfSprite_setPosition(sa->s_l_right, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->s_l_right, NULL);
        sa->anima.x_lap_gu = sa->anima.x_lap_dr;
    }
    if (sa->anima.x_lap_dr > 1100) {
        float x_ = (sa->anima.x_lap_gu -= 0.1);
        sfSprite_setPosition(sa->s_l_left, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->s_l_left, NULL);
        if (sa->anima.x_lap_gu < 900)
            sa->anima.x_lap_dr = 900;
    }
}

void check_poul(Naruto *sa, sfRenderWindow *window)
{
    float y = 1380 + sa->y_map, x = sa->x_map + 680;

    if (sa->anima.x_poul_dr < 490) {
        float x_ = (sa->anima.x_poul_dr += 0.1);
        sfSprite_setPosition(sa->png.s_poulet, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->png.s_poulet, NULL);
        sa->anima.x_poul_gu = sa->anima.x_poul_dr;
    }
    if (sa->anima.x_poul_dr > 490) {
        float x_ = (sa->anima.x_poul_gu -= 0.1);
        sfSprite_setPosition(sa->png.s_poulet1, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->png.s_poulet1, NULL);
        if (sa->anima.x_poul_gu < 300)
            sa->anima.x_poul_dr = 300;
    }
}

void check_old(Naruto *sa, sfRenderWindow *window)
{
    char *str = asked();
    float x = 680 + 1500 + sa->x_map, y = 380 + 500 + sa->y_map;
    if (sa->anima.y_old_up < 700) {
        float y_ = sa->anima.y_old_up += 0.1;
        sfSprite_setPosition(sa->png.s_old1, (sfVector2f){x, y_ + y});
        if (384 > y + y_ && 384 < y + y_ + 150 && 683 > \
            (x - 150) && 683 < x + 150) {
            check_dialogue(window , x, y + y_), \
            put_ask2(sa, str, (sfVector2f){100, 100}, 50); }
        sfRenderWindow_drawSprite(window, sa->png.s_old1, NULL);
        sa->anima.y_old_down = sa->anima.y_old_up; }
    if (sa->anima.y_old_up > 700) {
        float y_ = (sa->anima.y_old_down -= 0.1);
        sfSprite_setPosition(sa->png.s_old2, (sfVector2f){x, y_ + y});
        if (384 > y + y_ && 384 < y + y_ + 150 && 683 > \
            (x - 150) && 683 < x + 150) {
            check_dialogue(window , x, y + y_), \
            put_ask2(sa, str, (sfVector2f){100, 100}, 50); }
        sfRenderWindow_drawSprite(window, sa->png.s_old2, NULL);
        if (sa->anima.y_old_down < 100)
            sa->anima.y_old_up = 100; }
}

void check_man(Naruto *sa, sfRenderWindow *window)
{
    char *str = asked_man();
    float x = 680 + 600 + sa->x_map, y = 380 + 800 + sa->y_map;
    if (sa->anima.y_man_up < 1000) {
        float y_ = sa->anima.y_man_up += 0.1;
        sfSprite_setPosition(sa->png.s_man1, (sfVector2f){x, y_ + y});
        if (384 > y + y_ && 384 < y + y_ + 150 && 683 > x && 683 < x + 150) {
            check_dialogue(window , x, y + y_);
            put_ask2(sa, str, (sfVector2f){100, 200}, 50); }
        sfRenderWindow_drawSprite(window, sa->png.s_man1, NULL);
        sa->anima.y_man_down = sa->anima.y_man_up; }
    if (sa->anima.y_man_up > 1000) {
        float y_ = sa->anima.y_man_down -= 0.1;
        sfSprite_setPosition(sa->png.s_man2, (sfVector2f){x, y_ + y});
        if (384 > y + y_ && 384 < y + y_ + 150 && 683 > x && 683 < x + 150) {
            check_dialogue(window , x, y + y_);
            put_ask2(sa, str, (sfVector2f){100, 200}, 50); }
        sfRenderWindow_drawSprite(window, sa->png.s_man2, NULL);
        if (sa->anima.y_man_down < 100)
            sa->anima.y_man_up = 100;
    }
}

void check_pap(Naruto *sa, sfRenderWindow *window)
{
    float x = 680 + 1050 + sa->x_map, y = 380 + 1250 + sa->y_map;
    if (sa->anima.y_pap_up < 500) {
        float y_ = sa->anima.y_pap_up += 0.1;
        sfSprite_setPosition(sa->png.s_pap1, (sfVector2f){x, y_ + y});
        sfRenderWindow_drawSprite(window, sa->png.s_pap1, NULL);
        sa->anima.y_pap_down = sa->anima.y_pap_up;
    }
    if (sa->anima.y_pap_up > 500) {
        float y_ = (sa->anima.y_pap_down -= 0.1);
        sfSprite_setPosition(sa->png.s_pap2, (sfVector2f){x, y_ + y});
        sfRenderWindow_drawSprite(window, sa->png.s_pap2, NULL);
        if (sa->anima.y_pap_down < 100)
            sa->anima.y_pap_up = 100;
    }
}