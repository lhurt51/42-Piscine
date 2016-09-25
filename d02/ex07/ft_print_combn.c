/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:12:34 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/14 14:13:05 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int n;
	ft_putchar('\n');
}

int main()
{
	ft_print_combn();
	return(0);
}