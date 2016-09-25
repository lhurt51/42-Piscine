/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 15:41:50 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/31 15:41:53 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	position01(int col, int row, int w, int h)
{
	char c;
	char t;

	c = ' ';
	if (row == 1)
	{
		t = (col == w) ? '\\' : '*';
		c = (col == 1) ? '/' : t;
	}
	else if (row == h)
	{
		t = (col == w) ? '/' : '*';
		c = (col == 1) ? '\\' : t;
	}
	else if (col == 1 || col == w)
		c = '*';
	return (c);
}

char	*rush01(int w, int h)
{
	int		row;
	int		col;
	int		i;
	char	*str;

	str = malloc((w * h) + 1);
	row = 1;
	i = 0;
	if (w < 0 || h < 0)
		return (NULL);
	while (row <= h)
	{
		col = 1;
		while (col <= w)
		{
			str[i] = position01(col, row, w, h);
			i++;
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
