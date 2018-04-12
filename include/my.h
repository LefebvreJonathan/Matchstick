/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h of matchstck
*/

#ifndef MY_H_
#define MY_H_

int my_get_nbr(char const *str);

int matchstick(int nbr_line, int max_matches);

char **generate_map(int nbr_line);

int my_putstr(char const *str);

void my_putchar(char c);

int my_putnbr(int nb);

char *my_revstr(char *str);

int my_strcmp(char const *s1, char const *s2);

int my_strlen(char const *str);

int check_matches(char **map, int line_choose);

int player(char **map, int max_matches, int *param_choose);

int computer(char **map, int nbr_matches, int *param_choose, int max_matches);

char *my_scanf(int fd);

char *my_strcat(char const *dest, char const *src);

void free_array(char **array);

void print_params(int *param);

void print_array(char **array);

int check_number(char *str);


#endif //MY_H_
