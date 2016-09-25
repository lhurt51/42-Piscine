/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amilian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:52:32 by amilian           #+#    #+#             */
/*   Updated: 2016/07/17 18:52:34 by amilian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	left_line_bottom_left_corner(int l, int x, int y)
{
	if (x == 1 && y > 1 && y < l)
		ft_putchar('B');
	if (x == 1 && y == l)
		ft_putchar('C');
}

void	upper_line_right_corner(int w, int x, int y)
{
	if (x > 1 && x < w && y == 1)
		ft_putchar('B');
	if (x == w && y == 1)
		ft_putchar('C');
}

void	the_rest(int w, int l, int x, int y)
{
	if (x > 1 && x < w && y > 1 && y < l)
		ft_putchar(' ');
	if (x == w && y > 1 && y < l)
		ft_putchar('B');
	if (x == w && y == l)
		ft_putchar('A');
	if (x > 1 && x < w && y == l)
		ft_putchar('B');
}

void	rush(int w, int l)
{
	int x;
	int y;

	x = 1;
	y = 1;
	if (x == 1 && y == 1)
		ft_putchar('A');
	while (y <= l)
	{
		while (x <= w)
		{
			if (l > 1)
				left_line_bottom_left_corner(l, x, y);
			if (w > 1)
				upper_line_right_corner(w, x, y);
			if (l > 1 && w > 1)
				the_rest(w, l, x, y);
			x++;
		}
		y++;
		x = 1;
		ft_putchar('\n');
	}
}
