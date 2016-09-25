/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:55:24 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/20 14:55:26 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *array;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min += 1;
		i++;
	}
	array[i] = '\0';
	*range = array;
	return (i);
}
