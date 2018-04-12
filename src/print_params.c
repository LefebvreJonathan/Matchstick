/*
** EPITECH PROJECT, 2022
** CPE_matchstick_2017
** File description:
** Created by LEFEBVRE Jonathan
*/

#include "my.h"

void print_params(int *param)
{
	my_putstr("Player removed ");
	my_putnbr(param[1]);
	my_putstr(" match(es) from line ");
	my_putnbr(param[0]);
	my_putchar('\n');
}