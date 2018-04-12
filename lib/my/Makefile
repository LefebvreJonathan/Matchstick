##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

RM	=	rm -f

SRCS	=	./my_get_nbr.c	\
		./my_putchar.c	\
		./my_putnbr.c	\
		./my_putstr.c	\
		./my_revstr.c	\
		./my_scanf.c	\
		./my_strcat.c	\
		./my_strcmp.c	\
		./free_array.c	\
		./my_strlen.c	\
		./print_array.c	\
		./check_number.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
