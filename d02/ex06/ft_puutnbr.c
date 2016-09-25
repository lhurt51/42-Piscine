/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:43:54 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/14 11:44:20 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putnbr(int nb)
{
	int num;

	num = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}
