/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 21:49:41 by dstolz            #+#    #+#             */
/*   Updated: 2016/08/02 21:49:43 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

// int	ft_is_space(char c)
// {
// 	if (c == ' ')
// 		return (1);
// 	if (c == '\t')
// 		return (1);
// 	if (c == '\n')
// 		return (1);
// 	if (c == '\r' || c == '\f' || c == '\v')
// 		return (1);
// 	return (0);
// }

// int	ft_is_numeric(char c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	return (0);
// }

// int	ft_atoi(char *str)
// {
// 	int to_add;
// 	int value;

// 	to_add = 1;
// 	value = 0;
// 	while (*str && ft_is_space(*str))
// 		str++;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			to_add = 0;
// 		str++;
// 	}
// 	while (ft_is_numeric(*str))
// 	{
// 		value *= 10;
// 		if (to_add)
// 			value += (*str) - '0';
// 		else
// 			value -= (*str) - '0';
// 		str++;
// 	}
// 	return (value);
// }
