/*
** EPITECH PROJECT, 2018
** my_scanf.c
** File description:
** my_scanf.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "./../../include/my.h"

char *my_scanf(int fd)
{
	char buf[2] = "";
	char *str = malloc(sizeof(char));
	int error = 0;

	error = read(fd, buf, 1);
	while (error != 0) {
		str = my_strcat(str, buf);
		if (buf[0] == '\n')
			break;
		else
			error = read(fd, buf, 1);
	}
	str[my_strlen(str) - 1] = 0;
	return (str);
}
