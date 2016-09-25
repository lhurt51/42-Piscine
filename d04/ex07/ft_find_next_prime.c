/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:01:39 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/16 16:01:42 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int i;
	int count;

	i = 1;
	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (nb);
	}
	while (i <= nb / 2)
	{
		i++;
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int a;

	a = 0;
	while (a != 1)
	{
		a = is_prime(nb);
		nb++;
	}
	return (nb - 1);
}
