/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 22:27:11 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/13 22:27:22 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;
	a = '/';
	while(a++ <= '9')
	{
		b = '/';
		while(b++ < '9')
		{
			c = a - 1;
			while(c++ < '9')
			{
				d = b;
				while(d++ < '9')
				{
					if (b != d || a != c)
					{
						if (!(c == '0' && d == '1'))
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					}
				}
			}
		}
	}
	ft_putchar('\n');
}