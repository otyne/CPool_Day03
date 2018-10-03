/*
** EPITECH PROJECT, 2018
** my put nbr
** File description:
** print any number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    char n;
    
    if (nb < 0) {
	my_putchar('-');
	nb *= -1;
    }
    if (nb > 0) {
	n = nb % 10 + '0';
	my_put_nbr(nb / 10);
	my_putchar(n);
    }
}
