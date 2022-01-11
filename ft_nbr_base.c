/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:25:16 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/11 15:31:58 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_nbr_base (unsigned long long n, int base, int which)
{
	char *ptr_base;
	int	len;

	len = 0;
	if (which)
		ptr_base = "0123456789ABCDEF";
	else
		ptr_base = "0123456789abcdef";
	if (n / base)
		ft_nbr_base (n / base, base, which);
	len += ft_putchar (ptr_base[n % base]);
	return (len);
}