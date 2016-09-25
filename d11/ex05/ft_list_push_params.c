/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 18:18:35 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/26 18:18:36 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list *new;
	int i;

	i = 1;
	new = ft_create_elem(av[i]);
	i++;
	while (i < ac)
	{
		ft_list_push_front(&new, av[i]);
		i++;
	}
	return (new);
}
