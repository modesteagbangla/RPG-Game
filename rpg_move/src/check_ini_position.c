/*
** EPITECH PROJECT, 2021
** check_int_pos
** File description:
** check_initial_position
*/

#include "../include/rpg.h"
#include "../include/ini_position.h"

void init_all_animation(Naruto *sa)
{
    sa->anima.x_lap_dr = 900, sa->anima.x_lap_gu = 0;
    sa->anima.x_poul_dr = 300, sa->anima.x_poul_gu = 0;
    sa->anima.y_old_up = 100, sa->anima.y_old_down = 0;
    sa->anima.y_man_up = 100, sa->anima.y_man_down = 0;
    sa->anima.y_pap_up = 100, sa->anima.y_pap_down = 0;
    sa->anima.y_drag_up = 100, sa->anima.y_drag_down = 0;
    sa->anima.x_cat_left = 100, sa->anima.x_cat_right = 0;
    sa->anima.x_sorc_left = 0, sa->anima.x_sorc_right = 500;
    sa->anima.x_bat_left = 100, sa->anima.x_bat_right = 0;
}

void all_animation(Naruto *sa, sfRenderWindow *window)
{
    check_rabbit(sa, window);
    check_poul(sa, window);
    check_old(sa, window);
    check_man(sa, window);
    check_pap(sa, window);
    check_drag(sa, window);
    check_cat(sa, window);
    check_sorcier(sa, window);
    check_boat(sa, window);
}

void check_anim(sfRenderWindow *window, Naruto *sa)
{
    l_left(window, sa), l_right(window, sa);
    move_pnj1(window, sa), move_pnj2(window, sa);
    move_poulet(window, sa);
    move_pap(window, sa), move_pap2(window, sa);
    move_cat1(window, sa);
    move_bat(window, sa);
    move_drag1(window, sa);
    move_white(window, sa);
}
