/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** prototype.h
*/

#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

#include "struct.h"

void function_set_texture(st_window *win, menu *men);
void function_create_texture_three(st_window *win, menu *men);
void function_create_texture_two(st_window *win, menu *men, int ac, char **av);
void function_create_sprite(st_window *win, menu *men);
void function_create_sprite_two(st_window *win, menu *men);
void function_create_sprite_t(st_window *win, menu *men);
void function_create_texture(st_window *win, menu *men, int ac, char **av);
void my_destroy(st_window *dest, menu *men);
void my_destroy_one(st_window *dest, menu *men);
void my_destroy_two(st_window *dest, menu *men);
void my_destroy_three(st_window *dest, menu *men);
st_window *checker_positionn(st_window *win, menu *men);
void function_set_txt_two(st_window *win, menu *men);
void position_sett(menu *men, st_window *win);
int my_menu(st_window *win, menu *men);
void my_sleep(int b);
void select_menu(st_window *win, menu *men);
void function_set_rect(st_window *win, menu *men);
void function_set_position_rect(st_window *win, menu *men);
void function_set_position_rect_two(st_window *win, menu *men);
st_window *checker_position(st_window *win, menu *men);
void my_destroy_or(st_window *win, menu *men);
st_window *checker_position_five(st_window *win, menu *men);
st_window *checker_position_six(st_window *win, menu *men);
st_window *checker_position_or(st_window *win, menu *men);
void set_music(menu *men, st_window *win);
st_window *checker_position_three(st_window *win, menu *men);
st_window *checker_position_two(st_window *win, menu *men);
st_window *checker_position_one(st_window *win, menu *men);
st_window *anime(st_window *win, menu *men);
st_window *anime_t(st_window *win, menu *men);
int display_more(menu *men, st_window *win);
void put_store(st_window *win, char *ask, sfVector2f x, sfColor color);
st_window *initialise_player(st_window *win, menu *men);
int display_setting(menu *men, st_window *win);
void select_setting(menu *men, st_window *win);
void set_vol(menu *men, st_window *win);
void display_store(st_window *win, menu *men);
void buy_power(st_window *win, menu *men);
void buy_life(st_window *win, menu *men);
void position_store(st_window *win, menu *men);
void animation_lpm(st_window *win, menu *men);
int check_move(st_window *win);
void initialise_game(st_window *win, menu *men, int ac, char **av);
void decide_anim(st_window *win, menu *men);
void loading_enter_game(st_window *win, menu *men);
void loading_go_to_play(st_window *win, menu *men);
void decide_anim_one(st_window *win, menu *men);
void position_menu(st_window *win, menu *men);
void epi_fantasy(st_window *win, menu *men);
void choose_option_menu(st_window *win, menu *men);
void select_menu(st_window *win, menu *men);
st_window *initialise_ennemie(st_window *win, menu *men);
void function_create_texture_twoo   \
(st_window *win, menu *men, int ac, char **av);
void sound(st_window *win, menu *men, int ac, char **av);

#endif/*_PROTOTYPE_H_*/