/*
** EPITECH PROJECT, 2017
** mouse.c
** File description:
** mouse
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"

void	manage_mouse(sprite *sp, background *bg, musics *msc)
{
	int min = 180;
	int max = 820;

	sp->position = sfSprite_getPosition(sp->speg);
	sp->dposition = sfMouse_getPositionRenderWindow(bg->window);
	msc->sound = sfMusic_createFromFile("mult/finish_him_.ogg");

	if (sp->dposition.x > sp->position.x &&
	    sp->dposition.y > sp->position.y &&
	    sp->dposition.x < sp->position.x + 260 &&
	    sp->dposition.y < sp->position.y + 180) {
		sfMusic_play(msc->sound);
		sfSprite_setPosition(sp->speg, sp->vpeg);
		sp->vpeg.y = (rand() % (max - min + 1)) + min;
		sp->vpeg.x = -260;
	}
}
