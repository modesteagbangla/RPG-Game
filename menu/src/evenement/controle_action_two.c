/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** controle_action_two.c
*/

#include "../../include/myrpg.h"

st_window *checker_position(st_window *win, menu *men)
{
    win = checker_position_one(win, men);
    win = checker_position_two(win, men);
    win = checker_position_three(win, men);
    win = checker_position_or(win, men);
    win = checker_position_five(win, men);
    return (win);
}