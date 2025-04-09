/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:07:58 by hporta-c          #+#    #+#             */
/*   Updated: 2025/04/09 15:40:38 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
int	ft_printf(const char *format, ...)
{
	
}*/

int	main()
{
	char *str = "ab";
	printf("%d", printf("%d", printf("%s", str)));
	return (0);
}
