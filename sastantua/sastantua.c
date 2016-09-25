/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 12:56:12 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/17 12:56:16 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	find_base(int size)
{
	int sum;
	int adder;
	int i;

	if (size == 1)
	{
		return (7);
	}
	else if (size == 2)
	{
		return (19);
	}
	else
	{
		adder = 6;
		size -= 2;
		i = 0;
		while (size > 0)
		{
			adder += (i % 2) + 1;
			sum += adder * 2;
			i++;
		}
	}
	return (sum + 2);
}

int print_layer(int base)
{
	int n;
	int i;
	int row;
	int spaces;
	int b;
	int d;

	spaces = (base / 2) - 1;
	n = 1;
	i = 1;
	row = 3;
	while (i <= row)
	{
		d = 0;
		b = 0;
		while (d < spaces)
		{
			ft_putchar(' ');
			d++;
		}
		ft_putchar('/');
		while (b < n)
		{
			ft_putchar('*');
			b++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		n += 2;
		i++;
		spaces--;
	}
	row++;
	
}

void	sastantua(int size)
{
	int base;
	int layer;

	base = find_base(size);
	layer = print_layer(base);
	if (layer == size)
	{

	}
}

int	main()
{
	sastantua(2);
	return(0);
}