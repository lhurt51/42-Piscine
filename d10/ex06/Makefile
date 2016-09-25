# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhurt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 15:31:23 by lhurt             #+#    #+#              #
#    Updated: 2016/07/25 15:31:25 by lhurt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = main.c libft.a

all: start

start:
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	rm -f $(NAME)

re: clean all
