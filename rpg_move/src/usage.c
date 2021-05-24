/*
** EPITECH PROJECT, 2020
** the description
** File description:
** the description
*/

#include <stdio.h>
#include <unistd.h>

int my_putstr(char const *str);
void my_putchar(char c);

void usage(void)
{
    my_putstr("USAGE\n");
    my_putchar(' ');
    my_putstr("./my_rpg\n");
    my_putchar('\n');
    my_putstr("DESCRIPTION\n");
    my_putstr("-Wellcome in universe of My_rpg.");
    my_putchar('\n');
    my_putstr(".");
    my_putchar('\n');
    my_putstr("-The goal of this game is finish this game :)");
    my_putchar('\n');
    my_putstr("-And the difficulty increase when we change level.\n");
}
