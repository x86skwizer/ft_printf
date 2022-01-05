/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:25:16 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/05 18:42:45 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void ft_nbr_base (unsigned long long n, int base)
{
	const char *bb = "0123456789abcdef";
	if (n / base)
		ft_nbr_base (n / base, base);
	ft_putchar_fd (bb[n % base], 1);
}

void ft_nbr_gbase (unsigned long long n, int base)
{
	const char *bb = "0123456789ABCDEF";
	if (n / base)
		ft_nbr_gbase (n / base, base);
	ft_putchar_fd (bb[n % base], 1);
}
