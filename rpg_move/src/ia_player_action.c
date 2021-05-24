/*
** EPITECH PROJECT, 2021
** ia_player_action
** File description:
** check_attack_repost
*/

#include "../include/war.h"
#include "../../menu/include/myrpg.h"
#include "../include/ai.h"

void check_attackclaoud(Naruto *sa, war1 *na)
{
    if (na->atta == 0)
        sfRenderWindow_drawSprite(sa->window, na->s_pos_fight, NULL);
    if (na->atta == 1) {
        move_att1(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_att1_cloud, NULL); }
    if (na->atta == 2) {
        m_att2(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_att2_cloud, NULL); }
    if (na->atta == 3) {
        m_soutient2(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_soutient2, NULL); }
    if (na->atta == 4) {
        m_soutient1(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_sou1, NULL); }
}

void check_repost(Naruto *sa, war1 *na)
{
    if (na->repost == 0)
        sfRenderWindow_drawSprite(sa->window, na->s_pos_fight_s, NULL);
    if (na->repost == 1) {
        m_att1_seph(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_att1_seph, NULL); }
    if (na->repost == 2) {
        m_att2_seph(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_att2_seph, NULL); }
    if (na->repost == 3) {
        m_att3_seph(sa->window, na);
        sfRenderWindow_drawSprite(sa->window, na->s_att3_seph, NULL); }
}