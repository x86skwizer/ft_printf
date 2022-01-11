/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:18:52 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/11 15:34:18 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrunsign(unsigned long long n)
{
	int	len;

	len = 0;
	if (n / 10)
		ft_putnbrunsign(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}
