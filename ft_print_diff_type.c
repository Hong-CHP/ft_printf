#include "libftprintf.h"

int ft_print_hex(unsigned long ptr)
{
    int len;
    char    buffer[20];
    char    *base_hex;
    int     i;

    base_hex = "0123456789abcdef";
    len = 0;
    i = 0;
    while (ptr > 0)
    {
        buffer[i++] = base_hex[ptr % 16];
        ptr /= 16;
        len++;
    }
    while (i > 0)
        write(1, &buffer[--i], 1);
    return (len);
}

int ft_print_hex_upper(unsigned long ptr)
{
    int len;
    char    buffer[20];
    char    *base_hex;
    int     i;

    base_hex = "0123456789ABCDEF";
    len = 0;
    i = 0;
    while (ptr > 0)
    {
        buffer[i++] = base_hex[ptr % 16];
        ptr /= 16;
        len++;
    }
    while (i > 0)
        write(1, &buffer[--i], 1);
    return (len);
}

int ft_putnbr(int nbr)
{
    long long   nb;
    int         len;

    len = 0;
    nb = (long long)nbr;
    if (nb < 0)
    {
        write(1, "-", 1);
        len++;
        nb = -nb;
    }
    if (nb >= 10)
        len += ft_putnbr(nb / 10);
    write(1, &(char){nb % 10 + '0'}, 1);
    len++;
    return (len);
}

int ft_put_no_sign_nbr(unsigned int nb)
{
    int len;

    len = 0;
    if (nb >= 10)
        len += ft_putnbr(nb / 10);
    write(1, &(char){nb % 10 + '0'}, 1);
    len++;
    return (len);
}