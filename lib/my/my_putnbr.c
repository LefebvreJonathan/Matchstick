/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** display number
*/

#include <unistd.h>
#include "./../../include/my.h"

int my_putnbr(int nb)
{
	int unit = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10) {
		unit = nb % 10;
		nb = (nb - unit) / 10;
		my_putnbr(nb);
		my_putchar(48 + unit);
	} else
		my_putchar(48 + nb);
	return (0);
}
