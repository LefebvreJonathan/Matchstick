/*
** EPITECH PROJECT, 2018
** computer_algorithm.c
** File description:
** computer_algorithm.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int computer_algorithm(char **map, int nbr_matches, int *param_choose,
	int max_matches)
{
	int n = max_matches;

	do {
		while (nbr_matches - n != 1 && n != 1)
			n--;
		param_choose[1] = n;
		for (int i = 1; map[i] != NULL; i++)
			if (check_matches(map, i) >= n) {
				param_choose[0] = i;
				return (0);
			}
		n--;
	} while (1);
}

int computer(char **map, int nbr_matches, int *param_choose, int max_matches)
{
	my_putstr("AI's turn...\n");
	computer_algorithm(map, nbr_matches, param_choose, max_matches);
	my_putstr("AI removed ");
	my_putnbr(param_choose[1]);
	my_putstr(" match(es) from line ");
	my_putnbr(param_choose[0]);
	my_putchar('\n');
	return (0);
}
