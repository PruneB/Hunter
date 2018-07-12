##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile_my_hunter
##

SRC	=	src/main.c		\
		src/mouse.c		\
		src/background.c	\
		src/sprite.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Werror -Iinclude

NAME	=	my_hunter

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -l c_graph_prog
		./$(NAME)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
