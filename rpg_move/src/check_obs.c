/*
** EPITECH PROJECT, 2021
** checkobs
** File description:
** checkobs
*/

#include "../include/rpg.h"

int check_obs_first(Naruto *sa, int x, int y)
{
    int xx = 680 + sa->x_map, yy = 380 + sa->y_map;
    if (x + 50 > 700 + xx && x < 1900 + xx && y > yy && y < 240 + yy)
        return (42);
    if (x > xx && x < xx + 450 && y + 100 > 275 + yy && y < 900 + yy)
        return (42);
    if (x > xx && x < xx + 320 && y + 100 > 2150 + yy && y < 2280 + yy)
        return (42);
    if (x > xx && x < xx + 100 && y + 80 > 1200 + yy && y < 2190 + yy)
        return (42);
    if (x > xx + 680 && x < xx + 990 && y + 80 > 1150 + yy && y < 1832 + yy)
        return (42);
    if (x > xx + 860 && x < xx + 2488 && y + 80 > 2098 + yy && y < 2338 + yy)
        return (42);
    if (x > xx + 975 && x < xx + 1380 && y + 80 > 952 + yy && y < 1135 + yy)
        return (42);
    if (x > xx + 900 && x < xx + 1220 && y + 80 > 1585 + yy && y < 1832 + yy)
        return (42);
    return (0);
}

int check_obs_second(Naruto *sa, int x, int y)
{
    int xx = 680 + sa->x_map, yy = 380 + sa->y_map;

    if (x > xx + 1480 && x < xx + 2050 && y + 80 > 1415 + yy && y < 1510 + yy)
        return (42);
    if (x > xx + 1480 && x < xx + 1700 && y + 80 > 1415 + yy && y < 1630 + yy)
        return (42);
    if (x > xx + 1530 && x < xx + 1960 && y + 80 > 1710 + yy && y < 1873 + yy)
        return (42);
    if (x > xx + 1840 && x < xx + 2050 && y + 80 > 1450 + yy && y < 1873 + yy)
        return (42);
    if (x > xx + 1480 && x < xx + 1830 && y + 80 > 940 + yy && y < 1180 + yy)
        return (42);
    if (x > xx + 1480 && x < xx + 2380 && y + 80 > 570 + yy && y < 1000 + yy)
        return (42);
    return (0);
}

int check_obs(Naruto *sa, int x, int y)
{
    int xx = 680 + sa->x_map, yy = 380 + sa->y_map, v = 0, w = 0;

    v = check_obs_first(sa, x, y);
    if (v == 42)
        return (42);
    if (check_obs_second(sa, x, y) == 42) return (42);
    if (x > xx + 3650 && x < xx + 3925 && y + 80 > 630 + yy && y < 895 + yy)
        return (42);
    if (x > xx + 2560 && x < xx + 4798 && y + 80 > 90 + yy && y < 630 + yy)
        return (42);
    if (x > xx + 2560 && x < xx + 3185 && y + 80 > 90 + yy && y < 1430 + yy)
        return (42);
    if (x > xx + 2560 && x < xx + 3417 && y + 80 > 630 + yy && y < 787 + yy)
        return (42);
    if (x > xx + 2560 && x < xx + 3410 && y + 80 > 782 + yy && y < 900 + yy)
        return (42);
    if (x > xx + 2560 && x < xx + 3185 && y + 80 > 1830 + yy && y < 2490 + yy)
        return (42);
    return (0);
}
