/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-seth.houndete
** File description:
** myrpg.h
*/

#ifndef _MY_RPG_H_
#define _MY_RPG_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct combat {
    char *life, *money, *power, *level1, *level2;
}player;

typedef struct var {
    sfRenderWindow *window_1;
    sfVideoMode mode;
    sfEvent event;
    sfSprite *background;
    sfTexture *texture_background;
    int backup, menu_pos;
    int volv;
    sfVector2i mouse;
    int score_life, n1, n2, n3, score_money, score_power;
    player cloud;
    player enemie;
    int nbr_piece;
    int g;
    int ia;
}st_window;

typedef struct piece_d_c
{
    sfSprite *piece;
    sfTexture *piece_t;
    sfIntRect piece_rect;
    sfClock *piece_clock;
    sfTime piece_time;
    float piece_second;
    sfSprite *diamant;
    sfTexture *diamant_t;
    sfIntRect diamant_rect;
    sfClock *diamant_clock;
    sfTime diamant_time;
    float diamant_second;
    sfSprite *coeur;
    sfTexture *coeur_t;
    sfIntRect coeur_rect;
    sfClock *coeur_clock;
    sfTime coeur_time;
    float coeur_second;
}pdc;

typedef struct level_up
{
    sfSprite *level_s;
    sfTexture *level_t;
}level;

typedef struct store_e
{
    sfSprite *level_s;
    sfTexture *level_t;
}store;

typedef struct anime_e
{
    sfSprite *anime_s;
    sfTexture *anime_t;
    sfIntRect anime_rect;
    sfClock *anime_clock;
    sfTime anime_time;
    float anime_second;
}cloud;

typedef struct volum_e
{
    sfSprite *vol_s_plus;
    sfTexture *vol_t_plus;
    sfSprite *vol_s_moins;
    sfTexture *vol_t_moins;
    sfSprite *flech_s;
    sfVector2f pos;
    sfTexture *flech_t;
    int vol;
    sfSound *sound;
    sfSoundBuffer *sbuffer;
    sfSound *sdp;
    sfSoundBuffer *sdpb;
    sfSound *sd_g;
    sfSoundBuffer *sd_gg;
    float volume;
    sfSoundBuffer *repl;
    sfSound *rep;
    float vrp;
    int fp;
    int pg;
}volume;

typedef struct epitec
{
    sfSprite *epi;
    sfTexture *epi_t;
    sfIntRect epi_rect;
    sfClock *epi_clock;
    sfTime epi_time;
    float epi_second;
}epit;

typedef struct achat_t
{
    sfSprite *achat_one;
    sfSprite *achat_two;
    sfTexture *achat_one_t;
    sfTexture *achat_two_t;
}achat;

typedef struct change {
    sfSprite *next;
    sfTexture *ne;
    sfSprite *prec;
    sfTexture *pre;
    int i, j;
}nextp;

typedef struct menu
{
    int v, x;
    sfSprite *background;
    sfTexture *texture_background;
    int menu_pos;
    sfText *text;
    sfFont *font_text;
    sfSprite *men;
    sfTexture *men_t;
    sfIntRect move_men;
    int b;
    int search_option;
    sfSprite *more;
    sfTexture *more_texture;
    sfClock *clock;
    sfTime time;
    float second;
    sfSprite *debut;
    sfTexture *debut_texture;
    sfSprite *setting;
    sfTexture *setting_texture;
    sfSprite *how_to_play;
    sfTexture *how_to_play_t;
    sfSprite *hty;
    sfTexture *hty_t;
    sfSprite *loading;
    sfTexture *loading_t;
    sfIntRect loading_rect;
    sfClock *clock_loading;
    sfTime time_loading;
    float second_loading;
    sfSprite *loading_play;
    sfTexture *loading_play_texture;
    sfIntRect loading_play_rect;
    sfClock *clock_lg_play;
    sfTime time_lg_play;
    float second_play_loading;
    sfSprite *play_load;
    sfTexture *play_load_t;
    sfSprite *turn_parametre;
    sfTexture *turn_parametre_t;
    sfIntRect setting_rect;
    sfClock *setting_clock;
    sfTime seeting_time;
    sfClock *tt;
    sfTime ttt;
    pdc pi;
    level level;
    store store;
    cloud anime;
    volume volume;
    epit epit;
    achat achat;
    sfSprite *t_t;
    sfTexture *tt_t;
    sfClock *c;
    sfTime tc;
    nextp song;
}menu;

#endif