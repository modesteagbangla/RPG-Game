/*
** EPITECH PROJECT, 2021
** war2
** File description:
** war2
*/

#ifndef _WAR2_H_
#define _WAR2_H_

#include "../include/war.h"
#include "../../menu/include/myrpg.h"

void operation_win(Naruto *sa);
st_window *operation_war(Naruto *sa, st_window *win);
void m_fight_pos(sfRenderWindow *window, war1 *na);
void m_fight_pos_s(sfRenderWindow *window, war1 *na);
void destroy_war(war1 *na);
void print_cloud(Naruto *sa, st_window *win);
void check_lose(war1 *na);
void init_war(war1 *na);
void check_role(war1 *na);
void check_settexture(war1 *na);
void check_attackclaoud(Naruto *sa, war1 *na);
void check_setposition(war1 *na);
void check_repost(Naruto *sa, war1 *na);
void check_war(Naruto *sa, war1 *na, st_window *win);

#endif/* !war2 */