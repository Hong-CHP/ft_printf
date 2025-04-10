#include "libftprintf.h"

int op_put_hex_lower(va_list args)
{
    int    nb;
    int     len;
    unsigned int num;

    len = 0;
    nb = va_arg(args, int);
    num = (unsigned int)nb;
    len = ft_print_hex(num);
    return (len);
}
/*
int op_put_hex_upper(va_list args)
{
    
}
*/