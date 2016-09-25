/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 14:51:52 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/15 14:51:56 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	fac = 1;
	i = nb;
	while (i > 1)
	{
		fac *= i;
		i--;
	}
	return (fac);
}
