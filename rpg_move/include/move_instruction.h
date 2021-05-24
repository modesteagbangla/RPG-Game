/*
** EPITECH PROJECT, 2021
** move
** File description:
** move instruction
*/

#ifndef _MOVE_H_
#define _MOVE_H_

#include "../include/rpg.h"

void move_face(sfRenderWindow *window, sfTime time, Naruto *sa);
void move_gauche(sfRenderWindow *window, sfTime time1, Naruto *sa);
void move_droite(sfRenderWindow *window, sfTime time2, Naruto *sa);
void move_dos(sfRenderWindow *window, sfTime time3, Naruto *sa);
void l_left(sfRenderWindow *window, Naruto *sa);
void l_right(sfRenderWindow *window, Naruto *sa);
void move_pnj1(sfRenderWindow *window, Naruto *sa);
void move_pnj2(sfRenderWindow *window, Naruto *sa);
void move_poulet(sfRenderWindow *window, Naruto *sa);
void move_pap(sfRenderWindow *window, Naruto *sa);
void move_pap2(sfRenderWindow *window, Naruto *sa);
void move_cat1(sfRenderWindow *window, Naruto *sa);
void move_bat(sfRenderWindow *window, Naruto *sa);
void move_drag1(sfRenderWindow *window, Naruto *sa);
void move_white(sfRenderWindow *window, Naruto *sa);

#endif/* !_MOVE_H_ */
