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

CC =	gcc

FLAG =	-Wall -Wextra -Werror -o 

NAME =	rush-2

SRC =	rush2.c	\
	ref00.c	\
	ref01.c	\
	ref02.c	\
	ref03.c	\
	ref04.c	\
	libft.a

OBJS =	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(NAME) $(SRC)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: clean all