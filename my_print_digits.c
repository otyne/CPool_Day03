/*
** EPITECH PROJECT, 2018
** my print digits
** File description:
** print all diff digits
*/

#include "my.h"

int my_print_digits(void)
{
    char i = '0';

    while (i != '9' + 1) {
	my_putchar(i);
	i += 1;
    }
    return (0);
}
