/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:25:16 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/08 18:18:18 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_nbr_base (unsigned long long n, int base, int which)
{
	char *bb;
	if (which)
		bb = "0123456789ABCDEF";
	else
		bb = "0123456789abcdef";
	if (n / base)
		ft_nbr_base (n / base, base, which);
	ft_putchar_fd (bb[n % base], 1);
}