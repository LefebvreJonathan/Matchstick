/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** strlen function
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
