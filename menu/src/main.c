/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** main.c
*/

#include "../include/myrpg.h"

void sound(st_window *win, menu *men, int ac, char **av)
{
    if (ac == 2) {
    win->g = 5;
    sfSound_play(men->volume.rep);
    sfSound_setVolume(men->volume.rep, men->volume.vrp);
    sfSound_setLoop(men->volume.rep, sfTrue); }
}

int main(int ac, char **av)
{
    st_window *win = malloc(sizeof(st_window));
    menu *men = malloc(sizeof(menu));
    win->g = 0, win->ia = 0;
    initialise_game(win, men, ac, av);
    sfSound_play(men->volume.sound);
    sfSound_setLoop(men->volume.sound, sfTrue);
    sound(win, men, ac, av);
    while (sfRenderWindow_isOpen(win->window_1)) {
        while (sfRenderWindow_pollEvent(win->window_1, &win->event)) {
            if (win->event.type == sfEvtClosed)
                sfRenderWindow_close(win->window_1);
            win = checker_position(win, men);
        }
        win = anime(win, men);
        win = anime_t(win, men);
        decide_anim(win, men);
        sfRenderWindow_display(win->window_1); }
    my_destroy(win, men);
    return (0);
}
