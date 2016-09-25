/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 16:40:21 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/28 16:40:23 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree	*tmp;

	tmp = malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->item = item;
		tmp->right = NULL;
		tmp->left = NULL;
	}
	return (tmp)
}
