/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:08:49 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/10 17:22:13 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int	ft_printf(const char *format, ...);
int op_putchar(va_list args);
int op_putstr(va_list args);
int op_putaddress(va_list args);
int op_putnbr(va_list args);
int op_put_un_nbr(va_list args);
int op_put_hex_lower(va_list args);
int op_put_hex_upper(va_list args);

int ft_print_hex(unsigned long ptr);
int ft_print_hex_upper(unsigned long ptr);
int ft_putnbr(int nb);
int ft_put_no_sign_nbr(unsigned int nb);

#endif
