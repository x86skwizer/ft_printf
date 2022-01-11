/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:27 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/11 13:37:33 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int     ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(long n, int fd);
int	ft_putnbrunsign_fd(unsigned long long n, int fd);
int	ft_putstr_fd(char *s, int fd);
int     ft_printf(const char *str, ...);
int    ft_nbr_base (unsigned long long n, int base, int);

#endif