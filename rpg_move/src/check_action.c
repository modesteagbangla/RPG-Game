/*
** EPITECH PROJECT, 2021
** check_action
** File description:
** action
*/

#include "../include/rpg.h"

void put_ask2(Naruto *sa, char *ask, sfVector2f pos, int size)
{
    sfFont *font = sfFont_createFromFile("rpg_move/font/Fujita Ray.ttf");
    sfText *text = sfText_create();
    sfText_setString(text, ask);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, sfYellow);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(sa->window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}

void put_ask(Naruto *sa, char *ask)
{
    sfFont *font = sfFont_createFromFile("rpg_move/font/Fujita Ray.ttf");
    sfText *text = sfText_create();
    sfText_setString(text, ask);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfRed);
    sfText_setPosition(text, (sfVector2f){500, 700});
    sfRenderWindow_drawText(sa->window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}

void print_board(Naruto *sa)
{
    sfTexture *t_;
    t_ = sfTexture_createFromFile("rpg_move/Image/info_bull.png", NULL);
    sfSprite *s_ = sfSprite_create();
    sfSprite_setTexture(s_, t_, sfTrue);
    sfSprite_setScale (s_, (sfVector2f){1, 0.5});
    sfSprite_setPosition(s_, (sfVector2f){0, 700});
    sfRenderWindow_drawSprite(sa->window, s_, NULL);
    sfTexture_destroy(t_);
    sfSprite_destroy(s_);
}

void check_ask(Naruto *sa, char *ask)
{
    print_board(sa);
    put_ask(sa, ask);
}

void operation_house(Naruto *sa);

void check_action(Naruto *sa, int x, int y, st_window *win)
{
    int i = 0;
    int xx = 680 + sa->x_map, yy = 380 + sa->y_map;
    if (x + 50 > 105 + xx && x < 222 + xx && y > 840 + yy && y < 987 + yy) {
        check_ask(sa, "Press space");
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            operation_house(sa);
    }
    if (x + 50 > 1650 + xx && x < 1780 + xx && y > 1100 + yy && y < 1220 + yy)
        i++;
    if (x + 50 > 2000 + xx && x < 2500 + xx && y > 100 + yy && y < 350 + yy)
        i++;
    if (x + 50 > 3500 + xx && x < 4000 + xx && y > 800 + yy && y < 1300 + yy) {
        check_ask(sa, "Press space");
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            win = operation_war(sa, win); }
}