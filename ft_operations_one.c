#include "libftprintf.h"

int op_putchar(va_list args)
{
    int    c;

    c = va_arg(args, int);
    write(1, &c, 1);
    return (1);
}

int op_putstr(va_list args)
{
    char    *str;
    int     len;

    len = 0;
    str = va_arg(args, char *);
    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (*str)
    {
        write(1, str++, 1);
        len++;
    }
    return (len);
}

int op_putaddress(va_list args)
{
    void    *p;
    unsigned long    ptr;
    int     len;

    p = va_arg(args, void *);
    if (!p)
    {
        write(1, "(nil)", 5);
        return (5);
    }
    ptr = (unsigned long)p;
    len = 0;
    write(1, "0x", 2);
    len = ft_print_hex(ptr) + 2;
    return (len);
}

int op_putnbr(va_list args)
{
    int     nb;
    int     len;

    nb = va_arg(args, int);
    len = ft_putnbr(nb);
    return (len);
}

int op_put_un_nbr(va_list args)
{
    unsigned int    nb;
    int             len;

    len = 0;
    nb = va_arg(args, unsigned int);
    len = ft_put_no_sign_nbr(nb);
    return (len);
}