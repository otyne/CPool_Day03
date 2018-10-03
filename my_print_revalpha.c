/*
** EPITECH PROJECT, 2018
** my print revalpha
** File description:
** print reverse alphabetically letter
*/

#include "my.h"

int my_print_revalpha(void)
{
    char i = 'z';

    while (i != 'a' - 1) {
	my_putchar(i);
	i -= 1;
    }
    return (0);
}
