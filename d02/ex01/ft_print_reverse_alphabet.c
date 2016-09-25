/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 19:16:52 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/13 19:17:01 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}

	ft_putchar('\n');
}