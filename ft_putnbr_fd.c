/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:44:51 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/11 13:34:33 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_fd(long n, int fd)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i += ft_putchar_fd('-', fd);
	}
	if (n / 10)
		ft_putnbr_fd (n / 10, fd);
	i += ft_putchar_fd (n % 10 + '0', fd);
	return i;
}
