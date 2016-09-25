/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 21:49:49 by dstolz            #+#    #+#             */
/*   Updated: 2016/08/02 21:49:51 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	r = 0;
	i = 0;
	while ((s1[i] || s2[i]) && r == 0 && i < n)
	{
		ft_putstr("aaaaa");
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}

void	make_sqaure(char **map, int row, int col, char fill)
{
	int		r;
	int		c;

	r = 0;
	while (r <= row)
	{
		c = 0;
		map[row + r][col] = fill;
		while (c <= col)
		{
			map[row + r][col + c] = fill;
			c++;
		}
		r++;
	}
}

int		check_square(char **map, int row, int col, char emp, int lines)
{
	int		nav;
	int		i;
	int		size;
	char	*stry;
	char	*strx;

	size = 1;
	nav = 1;
	stry = (char*)malloc(sizeof(char) * (lines - col));
	strx = (char*)malloc(sizeof(char) * (lines - col));
	while (map[row])
	{
		i = 0;
		if (map[row + nav][col] == emp && map[row][col + nav == emp])
		{
			stry[nav] = map[row + nav][col];
			while (i < lines)
			{
				ft_putstr("11111");
				strx[nav] = map[row][col + i];
				if (ft_strncmp(strx, stry, i + 1) != 0)
					return (size);
				nav++;
				i++;
			}
			size++;
		}
		else
			return (size);
		row++;
	}
	return (size);
}

void	find_square(char **map, char emp, int r, int c, char fill)
{
	int 		size;
	int			row;
	int			col;
	int			dow;
	int			rght;
	t_square	big;
	t_square	temp;

	row = 0;
	col = 0;
	big.x = 0;
	big.y = 0;
	big.sz = 0;
	temp = big;
	dow = r;
	size = r;
	if (size < c)
	{
		size = c;
	}
	while (dow >= 0)
	{
		rght = c;
		while (rght >= 0)
		{
			if (map[row][col] == emp)
			{
				// big = n_check_square(map, row, col, emp, size, big)
				temp.y = row;
				temp.x = col;
				temp.sz = check_square(map, row, col, emp, size);
			}
			col++;
			rght--;
		}
		if (big.sz < temp.sz)
			big = temp;
		row++;
		dow--;
	}
	make_sqaure(map, big.x, big.y, fill);
}

char	searchforchar(char *str, int count)
{
	int i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	count += i;
	while (i + 1 < count)
		i++;
	return (str[i]);
}

void	solve(char **map, int col)
{
	int i;
	int row;
	char emp;
	char fill;

	i = 0;
	row = ft_atoi(map[0]);
	emp = searchforchar(map[0], 1);
	fill = searchforchar(map[0], 3);
	find_square(map, emp, row, col, fill);
	while (i < row)
	{
		ft_putstr(map[i]);
		i++;
	}
}
