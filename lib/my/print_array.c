/*
** EPITECH PROJECT, 2022
** CPE_matchstick_2017
** File description:
** Created by LEFEBVRE Jonathan
*/

#include "./../../include/my.h"
#include <stdio.h>

void print_array(char **array)
{
	for (int i = 0; array[i] != NULL; i++) {
		my_putstr(array[i]);
		my_putchar('\n');
	}
	my_putchar('\n');
}