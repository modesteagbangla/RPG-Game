/*
** EPITECH PROJECT, 2021
** cine
** File description:
** matic
*/

#include "../include/war.h"
#include "../include/cinematic.h"

void destroy_cine(cine *mi)
{
    sfSprite_destroy(mi->s_combat_c);
    sfTexture_destroy(mi->t_combat_c);
    sfClock_destroy(mi->Clock1);
    sfSprite_destroy(mi->s_peace);
    sfTexture_destroy(mi->t_peace);
    sfClock_destroy(mi->Clock2);
    sfSprite_destroy(mi->s_destruct);
    sfTexture_destroy(mi->t_destruct);
    sfClock_destroy(mi->Clock3);
    sfSprite_destroy(mi->s_seph);
    sfTexture_destroy(mi->t_seph);
    sfClock_destroy(mi->Clock4);
    sfSprite_destroy(mi->s_cloud);
    sfTexture_destroy(mi->t_cloud);
    sfClock_destroy(mi->Clock5);
}

void swap_cine(int *a, Naruto *sa, cine *mi)
{
    sfRenderWindow_clear(sa->window, sfBlack);
    if (*a == 0)
        m_peace(mi, sa, a);
    if (*a == 1)
        m_destruct(mi, sa, a);
    if (*a == 2)
        m_seph(mi, sa, a);
    if (*a == 3)
        m_cloud(mi, sa, a);
    if (*a == 4)
        m_combat_c(mi, sa, a);
    if (*a == 5)
        sfRenderWindow_clear(sa->window, sfBlack), end_cine(sa, a);
}

void ini_cinematic(cine *mi)
{
    sprite_combat_c(mi);
    sprite_peace(mi);
    sprite_destruct(mi);
    sprite_seph(mi);
    sprite_cloud(mi);
}

void settex_cine(cine *mi)
{
    sfSprite_setTextureRect(mi->s_peace, mi->rect2);
    sfSprite_setTextureRect(mi->s_destruct, mi->rect3);
    sfSprite_setTextureRect(mi->s_combat_c, mi->rect1);
    sfSprite_setTextureRect(mi->s_seph, mi->rect4);
    sfSprite_setTextureRect(mi->s_cloud, mi->rect5);
}

void operation_cinematic(Naruto *sa)
{
    int a = 0, b = 0;
    cine *mi = malloc(sizeof(cine));

    ini_cinematic(mi);
    while (sfRenderWindow_isOpen(sa->window)) {
        while (sfRenderWindow_pollEvent(sa->window, &sa->event)) {
            if (sa->event.type == sfEvtClosed)
                sfRenderWindow_close(sa->window); }
        sfRenderWindow_clear(sa->window, sfBlack);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            b = 1;  }
        if ((!sfKeyboard_isKeyPressed(sfKeyEscape)) && b == 1)
            break;
        swap_cine(&a, sa, mi), settex_cine(mi);
        sfRenderWindow_display(sa->window);
        if (a == 6)
            break; }
    destroy_cine(mi);
    free(mi);
}
