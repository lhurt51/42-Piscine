/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 15:47:41 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/30 15:47:43 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 8192

typedef	struct	s_square
{
	int			x;
	int			y;
	int			sz;
}				t_square;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*ft_strcpy(char *dest, char *src);
void	find_square(char **map, char emp, int r, int c, char fill);
int		ft_atoi(char *str);
int		ft_is_space(char c);
int		ft_is_numeric(char c);
char	searchforchar(char *str, int count);
void	solve(char **map, int col);

#endif
