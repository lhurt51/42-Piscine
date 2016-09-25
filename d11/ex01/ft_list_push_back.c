/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:20:03 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/26 13:20:04 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	new = *begin_list;
	if (!new)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (new->next)
	{
		new = new->next;
	}
	new->next = ft_create_elem(data);
}
