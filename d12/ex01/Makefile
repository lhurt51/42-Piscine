# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhurt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/27 13:52:42 by lhurt             #+#    #+#              #
#    Updated: 2016/07/27 13:52:43 by lhurt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = cat.c libft.a

all: start

start:
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all
