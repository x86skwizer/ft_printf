/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 01:50:45 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/11 15:17:14 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int getWhichHex(char c)
{
	if (c == 'X')
		return 1;
	return 0;
}

int	handle_print_cases(const char *str, int i, va_list format)
{
	unsigned int	unsign;
	int				n;

	n = 0;
	unsign = 0;
	if (str[i] == 'c')
		n = ft_putchar((char)va_arg(format, int));
	else if (str[i] == 's')
		n = ft_putstr(va_arg(format, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		n = ft_putnbr(va_arg(format, int));
	else if (str[i] == 'u')
	{
		unsign = va_arg(format, unsigned int);
		n = ft_putnbrunsign(unsign);
	}
	else if (str[i] == 'x' || str[i] == 'X')
		n = ft_nbr_base(va_arg(format, unsigned int), 16, getWhichHex(str[i]));
	else if (str[i] == '%')
		n = ft_putchar('%');
	else if (str[i] == 'p')
	{
		n = ft_putstr("0x");
		n += ft_nbr_base(va_arg(format, unsigned int), 16, 0);
	}
	return (n);
}

int ft_printf(const char *str, ...)
{
	int i;
	int	n;
	va_list format;

	va_start(format, str);
	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			n += handle_print_cases(str, i , format);
		}
		else
			n += ft_putchar(str[i]);
		i++;
	}
	va_end(format);
	return (n);
}

// int	main(void)
// {
// 	ft_printf("l%cl%cl%cl%cl%c", 'a', 'i', 'u', 'e', 'o');
// 	return 0;
// }