/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:37:40 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/25 15:37:41 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		error(int i)
{
	if (i == 2)
		ft_putstr("Stop: division by zero");
	else if (i == 3)
		ft_putstr("Stop: module by zero");
	else
		return (0);
	return (-1234567);
}

int		do_math(char **argv, int (*atoi)(char*))
{
	if (ft_strcmp(argv[2], "+") == 0)
		return (atoi(argv[1]) + atoi(argv[3]));
	else if (ft_strcmp(argv[2], "-") == 0)
		return (atoi(argv[1]) - atoi(argv[3]));
	else if (ft_strcmp(argv[2], "/") == 0)
	{
		if (atoi(argv[3]) == 0)
			return (error(2));
		return (atoi(argv[1]) / atoi(argv[3]));
	}
	else if (ft_strcmp(argv[2], "*") == 0)
		return (atoi(argv[1]) * atoi(argv[3]));
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		if (atoi(argv[3]) == 0)
			return (error(3));
		return (atoi(argv[1]) % atoi(argv[3]));
	}
	else
		return (error(1));
}

int		main(int argc, char **argv)
{
	int i;
	int (*f)(char*);

	if (argc != 4)
		return (error(1));
	f = &ft_atoi;
	i = do_math(argv, &ft_atoi);
	if (i != -1234567)
	{
		ft_putnbr(i);
	}
	return (0);
}
