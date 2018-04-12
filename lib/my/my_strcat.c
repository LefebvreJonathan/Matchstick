/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** function that concatenates two strings
*/

#include "./../../include/my.h"
#include <stdlib.h>

char *my_strcat(char const *dest, char const *src)
{
	int i = 0;
	int a = 0;
	char *str = malloc(
		sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

	for (i = 0; dest[i] != 0; i++)
		str[i] = dest[i];
	for (a = 0; src[a] != 0; a++)
		str[a + i] = src[a];
	a++;
	str[a + i] = 0;
	return (str);
}
