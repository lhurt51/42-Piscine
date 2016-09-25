/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 15:43:19 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/31 15:43:21 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find_dimensions(int *row, int *col)
{
	char	buf;
	char	*str;
	int		i;
	int		c;

	c = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * 10000000000);
	while ((read(0, &buf, 1)))
	{
		*col = c;
		if (buf == '\n')
		{
			c = 0;
			(*row)++;
		}
		else
			c++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	display(int row, int col, int i, int count)
{
	if (count >= 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putstr("]");
}

void	find_type(char *str, int row, int col)
{
	int count;

	count = 0;
	if (ft_strcmp(str, rush00(col, row)) == 0)
		display(row, col, 0, count++);
	if (ft_strcmp(str, rush01(col, row)) == 0)
		display(row, col, 1, count++);
	if (ft_strcmp(str, rush02(col, row)) == 0)
		display(row, col, 2, count++);
	if (ft_strcmp(str, rush03(col, row)) == 0)
		display(row, col, 3, count++);
	if (ft_strcmp(str, rush04(col, row)) == 0)
		display(row, col, 4, count++);
	if (count == 0)
		ft_putstr("aucune");
}

int		main(void)
{
	int		row;
	int		col;
	char	*ret;

	row = 0;
	col = 0;
	ret = find_dimensions(&row, &col);
	if ((row * col) >= 1000000000)
	{
		ft_putstr("aucune");
		return (1);
	}
	find_type(ret, row, col);
	ft_putchar('\n');
	return (0);
}
