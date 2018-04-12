/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick game
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int check_matches(char **map, int line_choose)
{
	int i = 0;
	int matches = 0;

	while (map[line_choose][i] != 0) {
		if (map[line_choose][i] == '|')
			matches++;
		i++;
	}
	return (matches);
}

int matches(int nbr_line)
{
	int nbr_matches = 0;

	for (int i = 0; i != nbr_line; i++)
		nbr_matches += 1 + 2 * i;
	return (nbr_matches);
}

void remove_matches(char *line, int nbr)
{
	int i = 1;

	line = my_revstr(line);
	while (line[i] != '|')
		i++;
	for (int n = i + nbr; i != n; i++)
		line[i] = ' ';
	line = my_revstr(line);
}

int win_player(int tour)
{
	if (tour == -1) {
		my_putstr("You lost, too bad...\n");
		return (2);
	} else {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	}
}

int matchstick(int nbr_line, int max_matches)
{
	int tour = 1;
	char **map = generate_map(nbr_line);
	int nbr_matches = matches(nbr_line);
	int *param_choose = malloc(sizeof(int) * 2);
	int end = 0;

	while (nbr_matches != 0) {
		print_array(map);
		if (tour == 1)
			end = player(map, max_matches, param_choose);
		else
			computer(map, nbr_matches, param_choose, max_matches);
		if (end == 84) {
			free_array(map);
			return (0);
		}
		remove_matches(map[param_choose[0]], param_choose[1]);
		tour *= -1;
		nbr_matches -= param_choose[1];
	}
	print_array(map);
	free_array(map);
	free(param_choose);
	return (win_player(tour));
}
