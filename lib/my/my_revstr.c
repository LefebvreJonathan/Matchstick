/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** a function that reverses a string
*/

#include <unistd.h>
#include "./../../include/my.h"

char *my_revstr(char *str)
{
	int n = 0;
	char stock;
	int i = my_strlen(str) - 1;
	int limite = i / 2;

	while (i != limite) {
		stock = str[n];
		str[n] = str[i];
		str[i] = stock;
		n++;
		i--;
	}
	return (str);
}
