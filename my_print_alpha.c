/*
** EPITECH PROJECT, 2018
** print alpha
** File description:
** print alphabetically letter
*/

#include "my.h"

int my_print_alpha(void)
{
    char i = 'a';

    while (i != 'z' + 1) {
	my_putchar(i);
	i += 1;
    }
    return (0);   
}
