/*
** EPITECH PROJECT, 2017
** sprite.c
** File description:
** sprite
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void	move_rect(sprite *sp, int offset, int max_value)
{
	int topmax = 748;
	int topset = 187;

	sp->rect.left = sp->rect.left + offset;

	while (sp->rect.left == max_value) {
		sp->rect.top = sp->rect.top + topset;
		sp->rect.left = 0;
	}

	if (sp->rect.top == 561 && sp->rect.left == 780) {
		sp->rect.top = 0;
		sp->rect.left = 0;
	}

	if (sp->rect.top == topmax)
		sp->rect.top = 0;
}

void	move_sprite(sprite *sp, times *tm)
{
	int min = 180;
	int max = 1620;

	tm->time = sfClock_getElapsedTime(tm->clock);
	tm->seconds = tm->time.microseconds / 1000000.0;
	if (tm->seconds > 0.1) {
		if (sp->vpeg.x == 1860) {
			sp->vpeg.x = -280;
			sp->vpeg.y = (rand() % (max - min + 1)) + min;
		}
		sfSprite_setPosition(sp->speg, sp->vpeg);
		sp->vpeg.x = sp->vpeg.x + 20;
		move_rect(sp, 260, 1040);
		sfClock_restart(tm->clock);
	}
	sfSprite_setTextureRect(sp->speg, sp->rect);
}
