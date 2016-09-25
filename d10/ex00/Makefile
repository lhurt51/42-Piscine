# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhurt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 10:55:11 by lhurt             #+#    #+#              #
#    Updated: 2016/07/25 10:55:14 by lhurt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c

HEADER_DIR = ./includes

all: start

start:
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER_DIR)
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o

fclean: clean
	rm -f $(NAME)

re: fclean all
