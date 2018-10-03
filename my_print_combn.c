/*
** EPITECH PROJECT, 2018
** my print comb n
** File description:
** print comb length n numbers
*/

#include "my.h"

static int int_to_char(int n, int nb, int it)
{
    char k;

    if (it != n) {
        k = nb % 10 + '0';
        int_to_char(n, nb / 10, it + 1);
        my_putchar(k);
    }
}

static int check_sup(int n, int nb)
{
    int to_check = nb % 10;
    int new_nb = nb / 10;
    int new_to_check = new_nb % 10;

    while (n != 1) {
        if (to_check > new_to_check) {
            n -= 1;
            nb = new_nb;
            to_check = nb % 10;
            new_nb = nb / 10;
            new_to_check = new_nb % 10;
        }
        else
            return (1);
    }
    return (0);
}

static int last_number(int n)
{
    int i = 0;
    int unit = 9;
    int nmax = 1;
    int last = 0;

    while (i != n) {
        last += unit * nmax;
        unit -= 1;
	nmax *= 10;
        i += 1;
    }
    return (last);
}

int my_print_combn(int n)
{
    int max = last_number(n);
    int nb = 0;

    while (nb != max + 1) {
        if (check_sup(n, nb) == 0) {
            int_to_char(n, nb, 0);
            if (nb == max)
                return (0);
            else {
                my_putchar(',');
                my_putchar(' ');
            }
        }
        nb += 1;
    }
}
