/*
** EPITECH PROJECT, 2022
** CPE_matchstick_2017
** File description:
** Created by LEFEBVRE Jonathan
*/

#include <stdio.h>
#include <stdlib.h>

void free_array(char **array)
{
	for (int i = 0; array[i] != NULL; i++)
		free(array[i]);
	free(array);
}