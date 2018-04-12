##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	matchstick

CC	=	gcc

RM	=	rm -f

SRCS	=	./src/generate_map.c		\
		./src/main.c			\
		./src/matchstick.c		\
		./src/player.c			\
		./src/print_params.c		\
		./src/computer_algorithm.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-I ./include/
CFLAGS	+=	-W -Wall -Wextra -Werror

all:		$(NAME) clean

$(NAME):	$(OBJS)
		make -C lib/my
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -Llib/my -lmy -lm

clean:
		make clean -C lib/my
		$(RM) $(OBJS)

fclean:		clean
		make fclean -C lib/my
		$(RM) $(NAME)

re:		fclean all clean

.PHONY:		all clean fclean re
