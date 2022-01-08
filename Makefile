# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamrire <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 13:18:57 by yamrire           #+#    #+#              #
#    Updated: 2022/01/08 18:21:20 by yamrire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_nbr_base.c ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putnbrunsign_fd.c ft_putstr_fd.c 
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:%.c=%.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all