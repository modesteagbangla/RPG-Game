/*
** EPITECH PROJECT, 2020
**  my_hunter
** File description:
** ninja hunter
*/

#include "../include/rpg.h"
#include "../include/rpg2.h"

void operation(sfRenderWindow *window, Naruto *sa, float *fx, float *fy)
{
    sfRenderWindow_clear(window, sfBlack);
    settexture_cloud(sa);
    settexture_othe_ani(sa);
    sfRenderWindow_drawSprite(window, sa->png.s_backg, NULL);
    sfRenderWindow_drawSprite(window, sa->s_map, NULL);
    check_direction(window, sa, fx, fy);
    sfSprite_setPosition(sa->s_map, (sfVector2f){*fx, *fy});
    if (sa->face == 1) sfRenderWindow_drawSprite(window, sa->s_face, NULL);
    if (sa->face == 2) sfRenderWindow_drawSprite(window, sa->s_dos, NULL);
    if (sa->face == 3) sfRenderWindow_drawSprite(window, sa->s_gauche, NULL);
    if (sa->face == 4) sfRenderWindow_drawSprite(window, sa->s_droite, NULL);
}

int evenement(sfRenderWindow *window, Naruto *sa, st_window *win)
{
    sfEvent event;
    sa->x_map = 0, sa->y_map = 0;
    float fx = 680, fy = 380;
    init_all_animation(sa);
    float y_pnj = 300;
    sfSprite_setPosition(sa->s_map, (sfVector2f){fx, fy});
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window); }
        check_anim(window, sa);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
                operate_pause(sa);
        if (sa->win->backup != -4) break;
        operation(window, sa, &fx, &fy), all_animation(sa, window);
        check_action(sa, 683, 384, win);
        if (sfKeyboard_isKeyPressed(sfKeyS))
            operation_status(sa);
        sfRenderWindow_display(window); }
}

void move_sprite(Naruto *sa)
{
    sprite_gauche(sa), sprite_droite(sa);
    sprite_face(sa), sprite_dos(sa);
    lapin_left(sa), lapin_right(sa);
    pnj1(sa), pnj2(sa), poulet(sa);
    sprite_papillon1(sa), sprite_papillon2(sa), sprite_background(sa);
    sprite_map(sa), sprite_cat1(sa), sprite_bateau(sa);
    sprite_dragon1(sa), sprite_white(sa);
}

int check_move(st_window *win)
{
    Naruto *sa = malloc(sizeof(Naruto));
    sfTime time;
    sa->face = 1;
    move_sprite(sa);
    sa->win = win;
    sa->window = win->window_1;
    operation_cinematic(sa);
    evenement(sa->window, sa, win);
    destroy(sa);
    free(sa);
}
