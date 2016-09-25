/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:50:03 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/21 18:50:05 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *p;
	char *a;

	if (hour > 12)
		hour -= 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, (hour + 1));
	else if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", hour, (hour + 1));
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 11)
		printf("%d.00 P.M. AND %d.00 A.M.\n", hour, (hour + 1));
	else if (hour < 12 && hour > 0)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, (hour + 1));
}
