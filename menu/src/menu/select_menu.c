/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** select_menu.c
*/

#include "../../include/myrpg.h"

void select_menu(st_window *win, menu *men)
{
    if (men->search_option == 0 && sfKeyboard_isKeyPressed(sfKeyEnter))
        win->menu_pos = 1;
    else if (men->search_option == 1 && sfKeyboard_isKeyPressed(sfKeyEnter))
        win->menu_pos = 2;
    if (men->search_option == 2 && sfKeyboard_isKeyPressed(sfKeyEnter))
        win->menu_pos = 3;
    else if (men->search_option == 3 && sfKeyboard_isKeyPressed(sfKeyEnter))
        win->menu_pos = 4;
    if (men->search_option == 4 && sfKeyboard_isKeyPressed(sfKeyEnter))
        win->menu_pos = 5;
    else if (men->search_option == 5 && sfKeyboard_isKeyPressed(sfKeyEnter))
        win->menu_pos = 6;
    return ;
}