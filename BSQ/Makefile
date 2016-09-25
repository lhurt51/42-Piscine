# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstolz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/30 15:46:27 by dstolz            #+#    #+#              #
#    Updated: 2016/07/30 15:46:28 by dstolz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc

FLAGS =		-Wall -Wextra -Werror -o

NAME =		bsq

SRC =		main.c \
		libft.a \
		ft_gen.c \
		navigation.c \

OBJ = 		$(SRCS:.c=.o)

all: comp

comp:
	$(CC) $(CFLAGS) $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
