/*
** EPITECH PROJECT, 2021
** cine end
** File description:
** cine
*/

#include "../include/rpg.h"
#include "../include/war.h"
#include "../include/cinematic.h"

void end_cine(Naruto *sa, int *a)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace)) *a = 6;
    put_ask(sa, "Press space to Continue");
    put_ask2(sa, "Votre mission chercher , trouver Sephiroth et restaurer   \
    la paix", (sfVector2f){100, 350}, 70);
}