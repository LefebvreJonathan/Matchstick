/*
** EPITECH PROJECT, 2018
** generate_map.c
** File description:
** generate_map.c
*/

#include <stdio.h>
#include <stdlib.h>

char *borderland(int len)
{
	int i = 0;
	char *str = NULL;

	len -= 4;
	str = malloc(sizeof(char) * len + 1);
	while (i != len) {
		str[i] = '*';
		i++;
	}
	str[i] = 0;
	return (str);
}

void set_carac(char *str, int *incrementor, int limit, char charac)
{
	while ((*incrementor) != limit) {
		str[(*incrementor)] = charac;
		(*incrementor)++;
	}
}

char *set_layer(char *str, int i, int nbr_space)
{
	int position = 1;

	str[0] = '*';
	set_carac(str, &position, nbr_space, ' ');
	set_carac(str, &position, nbr_space + (i * 2 - 1), '|');
	set_carac(str, &position, 2 * nbr_space + (i * 2 - 1), ' ');
	str[position - 1] = '*';
	str[position] = 0;
	return (str);
}

char **generate_map(int nbr_line)
{
	char **map = malloc(sizeof(char *) * (nbr_line + 3));
	int size_str = 1 + (2 * nbr_line) + 2;
	int nbr_space = nbr_line;
	int i = 1;

	map[0] = borderland(size_str + 2);
	while (i <= nbr_line) {
		map[i] = malloc(sizeof(char) * (size_str));
		map[i] = set_layer(map[i], i, nbr_space);
		i++;
		nbr_space--;
	}
	map[i] = borderland(size_str + 2);
	map[i + 1] = NULL;
	return (map);
}
