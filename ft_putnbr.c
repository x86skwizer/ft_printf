/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:44:51 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/12 13:59:58 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += ft_putchar('-');
	}
	if (n)
	{
		if (n / 10)
			ft_putnbr (n / 10);
		len += ft_putchar (n % 10 + '0');
		len++;
	}
	else
		len += ft_putchar('0');
	return (len);
}
