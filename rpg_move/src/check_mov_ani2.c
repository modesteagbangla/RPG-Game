/*
** EPITECH PROJECT, 2021
** chec_move
** File description:
** move animation 2
*/

#include "../include/rpg.h"

void check_drag(Naruto *sa, sfRenderWindow *window)
{
    float x = 680 + 4100 + sa->x_map, y = 380 + 500 + sa->y_map;
    if (sa->anima.y_drag_up < 1000) {
        float y_ = sa->anima.y_drag_up += 0.1;
        sfSprite_setPosition(sa->png.s_drag2, (sfVector2f){x, y_ + y});
        sfRenderWindow_drawSprite(window, sa->png.s_drag2, NULL);
        sa->anima.y_drag_down = sa->anima.y_drag_up;
    }
    if (sa->anima.y_drag_up > 1000) {
        float y_ = (sa->anima.y_drag_down -= 0.1);
        sfSprite_setPosition(sa->png.s_drag1, (sfVector2f){x, y_ + y});
        sfRenderWindow_drawSprite(window, sa->png.s_drag1, NULL);
        if (sa->anima.y_drag_down < 100)
            sa->anima.y_drag_up = 100;
    }
}

void check_cat(Naruto *sa, sfRenderWindow *window)
{
    float x = 680 + 1800 + sa->x_map, y = 380 + 1100 + sa->y_map;
    if (sa->anima.x_cat_left < 500) {
        float x_ = sa->anima.x_cat_left += 0.1;
        sfSprite_setPosition(sa->png.s_cat2, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->png.s_cat2, NULL);
        sa->anima.x_cat_right = sa->anima.x_cat_left;
    }
    if (sa->anima.x_cat_left > 500) {
        float x_ = (sa->anima.x_cat_right -= 0.1);
        sfSprite_setPosition(sa->png.s_cat1, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->png.s_cat1, NULL);
        if (sa->anima.x_cat_right < 100)
            sa->anima.x_cat_left = 100;
    }
}

void check_sorcier(Naruto *sa, sfRenderWindow *window)
{
    float x = 680 + 700 + sa->x_map, y = 380 + 1850 + sa->y_map;
    if (sa->anima.x_sorc_right > 100) {
        float x_ = sa->anima.x_sorc_right -= 0.1;
        sfSprite_setPosition(sa->png.s_white1, (sfVector2f){x_ + x, y});
        if (384 > y && 384 < y + 150 && 683 > x_ + x && 683 < x_ + x + 150)
            check_dialogue(window , x_ + x, y);
        sfRenderWindow_drawSprite(window, sa->png.s_white1, NULL);
        sa->anima.x_sorc_left = sa->anima.x_sorc_right;
    }
    if (sa->anima.x_sorc_right < 100) {
        float x_ = (sa->anima.x_sorc_left += 0.1);
        sfSprite_setPosition(sa->png.s_white2, (sfVector2f){x_ + x, y});
        if (384 > y && 384 < y + 150 && 683 > x_ + x && 683 < x_ + x + 150)
            check_dialogue(window , x_ + x, y);
        sfRenderWindow_drawSprite(window, sa->png.s_white2, NULL);
        if (sa->anima.x_sorc_left > 500)
            sa->anima.x_sorc_right = 500;
    }
}

void check_boat(Naruto *sa, sfRenderWindow *window)
{
    int x = 680 + 380 + sa->x_map, y = 380 + 2400 + sa->y_map;
    if (sa->anima.x_bat_left < 1500) {
        float x_ = sa->anima.x_bat_left += 0.1;
        sfSprite_setPosition(sa->png.s_bat2, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->png.s_bat2, NULL);
        sa->anima.x_bat_right = sa->anima.x_bat_left;
    }
    if (sa->anima.x_bat_left > 1500) {
        float x_ = (sa->anima.x_bat_right -= 0.1);
        sfSprite_setPosition(sa->png.s_bat1, (sfVector2f){x_ + x, y});
        sfRenderWindow_drawSprite(window, sa->png.s_bat1, NULL);
        if (sa->anima.x_bat_right < 100)
            sa->anima.x_bat_left = 100;
    }
}
