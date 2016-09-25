/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:03:38 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/26 20:03:40 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 1;
	if (nbr < 1 || begin_list == 0)
	{
		begin_list = 0;
		return(begin_list);
	}
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	begin_list->next = 0;
	return (begin_list);
}
