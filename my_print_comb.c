/*
** EPITECH PROJECT, 2018
** my print comb
** File description:
** dsiplay all comb of three digits numbs
*/

#include "my.h"

static void display_comb(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a != '7' || b != '8' || c != '9') {
	my_putchar(',');
	my_putchar(' ');
    }
}


int my_print_comb(void)
{
    char a = '0';
    char b = '0';
    char c = '0';

    while (a >= '0' && a <= '9') {
	if (c <= b || b <= a);
	else
	    display_comb(a, b, c);
	if (c == '9') {
	    b += 1;
	    c = '0';
	}
	if (b == '9' + 1) {
	    a += 1;
	    b = '0';
	}
	c += 1;
    }
    return (0);
}
