/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamrire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:27 by yamrire           #+#    #+#             */
/*   Updated: 2022/01/08 18:19:03 by yamrire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbrunsign_fd(unsigned long long n, int fd);
void	ft_putstr_fd(char *s, int fd);
int     ft_printf(const char *str, ...);
void    handle_print_cases(const char *str, int i, va_list format);
void    ft_nbr_base (unsigned long long n, int base, int);

#endif