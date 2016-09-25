/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:03:35 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/20 12:03:37 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min += 1;
		i++;
	}
	range[i] = '\0';
	return (range);
}
