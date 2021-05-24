/*
** EPITECH PROJECT, 2021
** fenetre
** File description:
** fenetre
*/

#include "../include/house.h"

void sprite_house(house *co)
{
    co->t_house = sfTexture_createFromFile \
        ("rpg_move/Image/house.png", NULL);
    co->s_house = sfSprite_create();
    sfSprite_setTexture(co->s_house, co->t_house, sfTrue);
    sfSprite_setScale (co->s_house, (sfVector2f){1, 1});
    co->Clock1 = sfClock_create();
}

void destroy_house(house *co)
{
    sfSprite_destroy(co->s_house);
    sfTexture_destroy(co->t_house);
    sfClock_destroy(co->Clock1);
}

void check_house(Naruto *sa, house *co)
{
    settexture_cloud(sa);
    check_hs_direction(sa, co);
    if (sa->face == 1) sfRenderWindow_drawSprite(sa->window, sa->s_face, NULL);
    if (sa->face == 2) sfRenderWindow_drawSprite(sa->window, sa->s_dos, NULL);
    if (sa->face == 3)
        sfRenderWindow_drawSprite(sa->window, sa->s_gauche, NULL);
    if (sa->face == 4)
        sfRenderWindow_drawSprite(sa->window, sa->s_droite, NULL);
}

void operation_house(Naruto *sa)
{
    house *co = malloc(sizeof(house));
    co->hs_x = 370, co->hs_y = -110;
    int a = 0;
    sprite_house(co);
    while (sfRenderWindow_isOpen(sa->window)) {
        while (sfRenderWindow_pollEvent(sa->window, &sa->event)) {
            if (sa->event.type == sfEvtClosed)
                sfRenderWindow_close(sa->window); }
        sfRenderWindow_clear(sa->window, sfBlack);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) a = 1;
        if ((!sfKeyboard_isKeyPressed(sfKeyEscape)) && a == 1) break;
        sfRenderWindow_drawSprite(sa->window, co->s_house, NULL);
        check_house(sa, co);
        sfSprite_setPosition(co->s_house, (sfVector2f) {co->hs_x, co->hs_y});
        sfRenderWindow_display(sa->window); }
    destroy_house(co);
    free(co);
}