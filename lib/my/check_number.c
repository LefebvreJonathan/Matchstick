/*
** EPITECH PROJECT, 2022
** CPE_matchstick_2017
** File description:
** Created by LEFEBVRE Jonathan
*/

int check_number(char *str)
{
	for (int i = 0; str[i] != 0; i++)
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}