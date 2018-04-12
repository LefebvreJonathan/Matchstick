/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main of matchstick game
*/

#include "my.h"

int check_arg(char **av, int *nbr_line, int *max_matches)
{
	(*nbr_line) = my_get_nbr(av[1]);
	(*max_matches) = my_get_nbr(av[2]);

	if ((*nbr_line) > 1 && (*max_matches) > 0 && (*nbr_line) < 100) {
		return (0);
	} else
		return (1);
}

int main(int ac, char **av)
{
	int nbr_line = 0;
	int max_matches = 0;

	if (ac != 3 || check_arg(av, &nbr_line, &max_matches) == 1)
		return (84);
	else
		return (matchstick(nbr_line, max_matches));
}
