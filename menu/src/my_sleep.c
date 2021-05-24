/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** my_sleep.c
*/

#include "../include/myrpg.h"

void my_sleep(int b)
{
    for (int a = b; a > 0; a -= 4)
        for (long int a = 10000000; a > 0; a--);
    return ;
}