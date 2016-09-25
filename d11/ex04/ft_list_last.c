/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 17:17:10 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/26 17:17:11 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	int count;
	t_list	*tmp;

	count = 0;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	tmp = begin_list;
	return (tmp);
}
