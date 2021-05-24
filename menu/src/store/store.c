/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** store.c
*/

#include "../../include/myrpg.h"

void display_store(st_window *win, menu *men)
{
    sfRenderWindow_clear(win->window_1, sfBlack);
    sfRenderWindow_drawSprite(win->window_1, men->store.level_s, NULL);
    position_store(win, men);
    buy_life(win, men);
    buy_power(win, men);
    animation_lpm(win, men);
    put_store(win, win->cloud.life, (sfVector2f){450, 180},     \
            (sfColor){191, 63, 63, 255});
    put_store(win, win->cloud.power, (sfVector2f){1170, 180},   \
            (sfColor){100, 179, 203, 255});
    put_store(win, win->cloud.money, (sfVector2f){1150, -85},   \
            (sfColor){255, 192, 31, 255});
    sfSprite_setTextureRect(men->pi.piece, men->pi.piece_rect);
    sfSprite_setTextureRect(men->pi.coeur, men->pi.coeur_rect);
    sfSprite_setTextureRect(men->pi.diamant, men->pi.diamant_rect);
    sfRenderWindow_drawSprite(win->window_1, men->pi.piece, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->pi.coeur, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->pi.diamant, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->achat.achat_one, NULL);
    sfRenderWindow_drawSprite(win->window_1, men->achat.achat_two, NULL);
}
