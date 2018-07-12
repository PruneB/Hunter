/*
** EPITECH PROJECT, 2017
** background.c
** File description:
** background
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <my.h>

void	display_background(background *bg, musics *msc, sprite *sp)
{
	sfVideoMode mode = {1600, 1000, 32};

	bg->window = sfRenderWindow_create(mode, "SFML window", sfResize |
					   sfClose, NULL);
	bg->texture = sfTexture_createFromFile("mult/back2.png", NULL);
	sp->tpeg = sfTexture_createFromFile("mult/peg.png", NULL);
	msc->music = sfMusic_createFromFile("mult/dp.ogg");

	bg->sprite = sfSprite_create();
	sp->speg = sfSprite_create();
	sfSprite_setTexture(bg->sprite, bg->texture, sfTrue);
	sfSprite_setTexture(sp->speg, sp->tpeg, sfTrue);
	sfMusic_play(msc->music);
}
