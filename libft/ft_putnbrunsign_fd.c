/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsign_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:18:52 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/08 13:31:19 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrunsign_fd(unsigned long long n, int fd)
{
	if (n / 10)
		ft_putnbrunsign_fd (n / 10, fd);
	ft_putchar_fd (n % 10 + '0', fd);
}
