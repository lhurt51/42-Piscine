/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collazt_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:24:04 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/21 23:24:06 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collazt_conjecture(unsigned int base)
{
	if (base == 1)
	{
		return (0);
	}
	else if (base % 2 == 0)
	{
		return (1 + ft_collazt_conjecture(base / 2));
	}
	else
	{
		return (1 + ft_collazt_conjecture(3 * base + 1));
	}
}
