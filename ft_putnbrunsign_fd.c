/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsign_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:18:52 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/11 13:35:51 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrunsign_fd(unsigned long long n, int fd)
{
	int	i;

	i = 0;
	if (n / 10)
		ft_putnbrunsign_fd (n / 10, fd);
	i += ft_putchar_fd (n % 10 + '0', fd);
	return (i);
}
