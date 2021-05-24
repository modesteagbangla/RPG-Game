/*
** EPITECH PROJECT, 2021
** file.h
** File description:
** file who containe all prototyp
*/

#include "war.h"

typedef struct cine {
    sfClock *Clock1;
    sfClock *Clock2;
    sfClock *Clock3;
    sfClock *Clock4;
    sfClock *Clock5;
    sfSprite *s_peace;
    sfTexture *t_peace;
    sfSprite *s_destruct;
    sfTexture *t_destruct;
    sfSprite *s_seph;
    sfTexture *t_seph;
    sfSprite *s_cloud;
    sfTexture *t_cloud;
    sfSprite *s_combat_c;
    sfTexture *t_combat_c;
    sfIntRect rect1;
    sfIntRect rect2;
    sfIntRect rect3;
    sfIntRect rect4;
    sfIntRect rect5;
}cine;

void sprite_peace(cine *mi);
void sprite_destruct(cine *mi);
void sprite_combat_c(cine *mi);
void sprite_seph(cine *mi);
void sprite_cloud(cine *mi);
void m_peace(cine *mi, Naruto *sa, int *a);
void m_destruct(cine *mi, Naruto *sa, int *a);
void m_seph(cine *mi, Naruto *sa, int *a);
void m_cloud(cine *mi, Naruto *sa, int *a);
void m_combat_c(cine *mi, Naruto *sa, int *a);
void destroy_cine(cine *mi);
void operation_cinematic(Naruto *sa);
void end_cine(Naruto *sa, int *a);
