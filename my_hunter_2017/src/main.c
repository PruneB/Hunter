/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"

void	init(sprite *sp, times *tm)
{
	sp->vpeg.x = 0;
	sp->vpeg.y = 0;
	sp->rect.top = 0;
	sp->rect.left = 0;
	sp->rect.width = 260;
	sp->rect.height = 180;
	tm->clock = sfClock_create();
}

void	render_window(sprite *sp, background *bg)
{
	sfRenderWindow_drawSprite(bg->window, bg->sprite, NULL);
	sfRenderWindow_drawSprite(bg->window, sp->speg, NULL);
	sfRenderWindow_display(bg->window);

}

int	main()
{
	sprite		sp;
	background	bg;
	musics		msc;
	times		tm;
	sfEvent		event;

	init(&sp, &tm);
	display_background(&bg, &msc, &sp);
	while (sfRenderWindow_isOpen(bg.window)) {
		move_sprite(&sp, &tm);
		while (sfRenderWindow_pollEvent(bg.window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(bg.window);
			if (event.type == sfEvtMouseButtonPressed)
				manage_mouse(&sp, &bg, &msc);
		}
		render_window(&sp, &bg);
	}
	sfRenderWindow_destroy(bg.window);
	return(0);
}
