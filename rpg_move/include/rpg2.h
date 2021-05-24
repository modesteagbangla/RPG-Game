/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** rpg.c  management of prototipe
*/

#ifndef _RPG2_H_
#define _RPG2_H_

#include "../include/rpg.h"

void destroy_clock(Naruto *sa);
void destroy_texture(Naruto *sa);
void destroy_sprite(Naruto *sa);
void destroy(Naruto *sa);
void settexture_cloud(Naruto *sa);
void settexture_othe_ani(Naruto *sa);
void operation(sfRenderWindow *window, Naruto *sa, float *fx, float *fy);
void init_all_animation(Naruto *sa);
void all_animation(Naruto *sa, sfRenderWindow *window);
void check_anim(sfRenderWindow *window, Naruto *sa);
int evenement(sfRenderWindow *window, Naruto *sa, st_window *win);
void move_sprite(Naruto *sa);

#endif/* !_RPG2_H_ */
