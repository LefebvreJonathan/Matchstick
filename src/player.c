/*
** EPITECH PROJECT, 2018
** player.c
** File description:
** player.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int error_line(char **map, int line_choose, char *line)
{
	int size_map = 0;

	while (map[size_map] != NULL)
		size_map++;
	size_map -= 1;
	if (line_choose < 0 || check_number(line) == 1) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (1);
	} else if (line_choose >= size_map || line_choose == 0) {
		my_putstr("Error: this line is out of range\n");
		return (1);
	}
	return (0);
}

int error_matches(char **map, int *params, int max_matches, int error)
{
	if (params[1] < 0 || error == 1) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (1);
	} else if (params[1] == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (1);
	} else if (params[1] > max_matches) {
		my_putstr("Error: you cannot remove more than ");
		my_putnbr(max_matches);
		my_putstr(" matches per turn\n");
		return (1);
	} else if (check_matches(map, params[0]) < params[1]) {
		my_putstr("Error: not enough matches on this line\n");
		return (1);
	}
	return (0);
}

int put_line(int *line_choose, char **map)
{
	char *line = NULL;

	(*line_choose) = 0;
	do {
		my_putstr("Line: ");
		line = my_scanf(0);
		if (line == NULL || line[0] == '\0') {
			free(line);
			return (84);
		}
		(*line_choose) = my_get_nbr(line);
	} while (error_line(map, (*line_choose), line) != 0);
	free(line);
	return (0);
}

int put_match(int *match_choose)
{
	char *match = NULL;
	int error = 0;

	my_putstr("Matches: ");
	match = my_scanf(0);
	if (match == NULL || match[0] == '\0')
		return (84);
	(*match_choose) = my_get_nbr(match);
	error = check_number(match);
	free(match);
	return (error);
}

int player(char **map, int max_matches, int *param_choose)
{
	int error = 0;

	my_putstr("Your turn:\n");
	do {
		if (put_line(&param_choose[0], map) == 84)
			return (84);
		error = put_match(&param_choose[1]);
		if (error == 84)
			return (84);
	} while (error_matches(map, param_choose, max_matches, error) != 0);
	print_params(param_choose);
	return (0);
}
