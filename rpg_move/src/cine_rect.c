/*
** EPITECH PROJECT, 2021
** cinematic rect
** File description:
** manage rect for cinematic
*/

#include "../include/cinematic.h"

void m_peace(cine *mi, Naruto *sa, int *a)
{
    sfTime time1 = sfClock_getElapsedTime(mi->Clock2);
    if (sfTime_asSeconds(time1) > 0.4f) {
        if (mi->rect2.left < 572) mi->rect2.left = mi->rect2.left + 500;
        else mi->rect2.left = 0, mi->rect2.top += 265;
        if (mi->rect2.top == 1060) *a = 1;
        sfRenderWindow_clear(sa->window, sfBlack);
        sfClock_restart(mi->Clock2); }
    sfRenderWindow_drawSprite(sa->window, mi->s_peace, NULL);
    put_ask2(sa, "Le monde", (sfVector2f){600, 10}, 70);
    put_ask2(sa, "tel que nous le connaissons...", (sfVector2f){500, 550}, 70);
}

void m_destruct(cine *mi, Naruto *sa, int *a)
{
    sfTime time1 = sfClock_getElapsedTime(mi->Clock3);
    if (sfTime_asSeconds(time1) > 0.15f) {
        if (mi->rect3.left < 4500) mi->rect3.left = mi->rect3.left + 500;
        else mi->rect3.left = 0, mi->rect3.top += 200;
        if (mi->rect3.top == 800) *a = 2, mi->rect3.top = 0;
        sfRenderWindow_clear(sa->window, sfBlack);
        sfClock_restart(mi->Clock3); }
    sfRenderWindow_drawSprite(sa->window, mi->s_destruct, NULL);
    put_ask2(sa, "a sombrer dans le desespoir a cause d'un homme ...",  \
        (sfVector2f){10, 10}, 70);
}

void m_seph(cine *mi, Naruto *sa, int *a)
{
    sfTime time1 = sfClock_getElapsedTime(mi->Clock4);
    if (sfTime_asSeconds(time1) > 0.2f) {
        if (mi->rect4.left < 5500) mi->rect4.left = mi->rect4.left + 500;
        else mi->rect4.left = 0;
        if (mi->rect4.left == 5500) *a = 3, mi->rect4.left = 0;
        sfRenderWindow_clear(sa->window, sfBlack);
        sfClock_restart(mi->Clock4); }
    sfRenderWindow_drawSprite(sa->window, mi->s_seph, NULL);
    put_ask2(sa, "Sephiroth", (sfVector2f){800, 600}, 100);
}

void m_cloud(cine *mi, Naruto *sa, int *a)
{
    sfTime time1 = sfClock_getElapsedTime(mi->Clock5);
    if (sfTime_asSeconds(time1) > 0.2f) {
        if (mi->rect5.left < 4860) mi->rect5.left = mi->rect5.left + 540;
        else mi->rect5.left = 0, mi->rect5.top += 360;
        if (mi->rect5.top == 720) *a = 4, mi->rect5.top = 0;
        sfRenderWindow_clear(sa->window, sfBlack);
        sfClock_restart(mi->Clock5); }
    sfRenderWindow_drawSprite(sa->window, mi->s_cloud, NULL);
    put_ask2(sa, "Pour le sauver, un seul espoir cloud.",   \
        (sfVector2f){450, 600}, 70);
}

void m_combat_c(cine *mi, Naruto *sa, int *a)
{
    sfTime time1 = sfClock_getElapsedTime(mi->Clock1);
    if (sfTime_asSeconds(time1) > 0.15f) {
        if (mi->rect1.left < 4500) mi->rect1.left = mi->rect1.left + 500;
        else mi->rect1.left = 0, mi->rect1.top += 281;
        if (mi->rect1.top == 843) *a = 5, mi->rect1.top = 0;
        sfRenderWindow_clear(sa->window, sfBlack);
        sfClock_restart(mi->Clock1); }
    sfRenderWindow_drawSprite(sa->window, mi->s_combat_c, NULL);
    put_ask2(sa, "Vous devreZ mener un combats afin de restaurer la paix",  \
        (sfVector2f){200, 700}, 70);
}
