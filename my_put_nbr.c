/*
** EPITECH PROJECT, 2018
** my put nbr
** File description:
** print any number
*/

#include "my.h"

static void display_nbr(int nb)
{
    if (nb > 0) {
	display_nbr(nb / 10);
	my_putchar(nb % 10 + '0';);
    }
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    display_nbr(nb);
    return (0);
}
