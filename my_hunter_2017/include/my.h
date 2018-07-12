/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my
*/

#ifndef MY_
#define MY_

typedef struct background
{
	sfSprite* sprite;
	sfTexture* texture;
	sfRenderWindow* window;
} background;

typedef struct sprite
{
	sfSprite* speg;
	sfTexture* tpeg;
	sfIntRect rect;
	sfVector2f vpeg;
	sfVector2f position;
	sfVector2i dposition;
} sprite;

typedef struct times
{
	sfClock* clock;
	sfTime time;
	float seconds;
} times;

typedef struct musics
{
	sfMusic* music;
	sfMusic* sound;
} musics;

void	move_rect(sprite *sp, int offset, int max_value);
void	display_background(background *bg, musics *msc, sprite *sp);
void	move_sprite(sprite *sp, times *tm);
void	manage_mouse(sprite *sp, background *bg, musics *msc);

#endif
