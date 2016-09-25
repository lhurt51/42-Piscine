/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:09:16 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/19 10:09:18 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int d;

	d = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[d] != '\0' && d < size)
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	i++;
	d++;
	sum = i + d;
	return (sum);
}
