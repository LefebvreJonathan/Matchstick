/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** strcmp function
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int calcul = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] != s2[i]) {
			calcul = s1[i] - s2[i];
			return (calcul);
		}
	return (0);
}
