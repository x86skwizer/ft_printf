# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamrire <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 13:18:57 by yamrire           #+#    #+#              #
#    Updated: 2022/01/08 14:46:31 by yamrire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_nbr_base.c
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:%.c=%.o)
LIBFT = libft/libft.a

all : $(NAME) 

$(NAME) : $(OBJ) $(LIBFT)

	$(CC) $(CFLAGS) -c $(SRC) $(LIBFT)
	ar rc $(NAME) $(OBJ) 

$(LIBFT) :
	make -C libft/

clean : 
	rm -f $(OBJ)
	make clean -C libft

fclean : clean
	rm -f $(NAME)
	make fclean -C libft/

re : fclean all