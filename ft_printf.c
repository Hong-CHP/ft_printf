/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:50:53 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/10 17:25:46 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	get_cor_operation(va_list args, unsigned int index)
{
	int (*diff_op[9])(va_list);

	diff_op[0] = op_putchar;
	diff_op[1] = op_putstr;
	diff_op[2] = op_putaddress;
	diff_op[3] = op_putnbr;
	diff_op[4] = op_putnbr;
	diff_op[5] = op_put_un_nbr;
	diff_op[6] = op_put_hex_lower;
	//diff_op[7] = op_put_hex_upper;

	return (diff_op[index](args));
}

int diff_type_printf(va_list args, char c)
{
	char *operators;
	int	i;
	
	operators = "cspdiuxX%";
	i = 0;
	while (operators[i])
	{
		if (c == operators[i])
		{
			return (get_cor_operation(args, i));
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += diff_type_printf(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}