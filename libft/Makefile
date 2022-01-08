# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamrire <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 14:13:41 by yamrire           #+#    #+#              #
#    Updated: 2022/01/08 14:21:19 by yamrire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar_fd.c ft_putnbr_fd.c ft_putnbrunsign_fd.c ft_putstr_fd.c
NAME = libft.a
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