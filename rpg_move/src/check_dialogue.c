/*
** EPITECH PROJECT, 2021
** dialogue
** File description:
** dialogue
*/

#include "../include/rpg.h"

void check_dialogue(sfRenderWindow *window, int x, int y)
{
    sfTexture *t_;
    t_ = sfTexture_createFromFile("rpg_move/Image/dialogue.png", NULL);
    sfSprite *s_;
    s_ = sfSprite_create();
    sfSprite_setTexture(s_, t_, sfTrue);
    sfSprite_setScale (s_, (sfVector2f){0.2, 0.2});
    sfSprite_setPosition(s_, (sfVector2f){x , y - 50});
    sfRenderWindow_drawSprite(window, s_, NULL);
    sfSprite_destroy(s_);
    sfTexture_destroy(t_);
}