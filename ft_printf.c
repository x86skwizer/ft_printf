/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 01:50:45 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/08 14:07:42 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	unsigned int	unsign;
	va_list	format;

	va_start(format, str);
	i = 0;
	unsign = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar_fd((char)va_arg(format, int), 1);
			else if (str[i] == 's')
				ft_putstr_fd(va_arg(format, char*) , 1);
			else if (str[i] == 'd' || str[i] == 'i')
				ft_putnbr_fd(va_arg(format, int), 1);
			else if (str[i] == 'u')
			{
				unsign = va_arg(format, unsigned int);
				ft_putnbrunsign_fd(unsign, 1);
			}
			else if (str[i] == 'x')
				ft_nbr_base(va_arg(format, unsigned int), 16);
			else if (str[i] == 'X')
				ft_nbr_gbase(va_arg(format, unsigned int), 16);
			else if (str[i] == '%')
				ft_putchar_fd('x', 1);
			else if (str[i] == 'p')
			{
				ft_putstr_fd("0x", 1);
				ft_nbr_base(va_arg(format, unsigned int), 16);
			}
			i++;
		}
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return i;
}
