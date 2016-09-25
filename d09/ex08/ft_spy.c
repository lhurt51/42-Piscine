/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:43:54 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/22 12:43:56 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	*ft_str_to_lowercase(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				r;

	r = 0;
	i = 0;
	while ((s1[i] || s2[i]) && r == 0)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}

void	soundalarm(char *str)
{
	char *a;
	char *b;
	char *c;

	a = "powers";
	b = "president";
	c = "attack";
	str = ft_str_to_lowercase(str);
	if (ft_strcmp(a, str) == 0 || ft_strcmp(b, str) == 0)
	{
		ft_putstr("Alert!!!");
	}
	else if (ft_strcmp(c, str) == 0)
	{
		ft_putstr("Alert!!!");
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc <= 1)
	{
		ft_putstr("Must enter arguements!");
		return (0);
	}
	while (i < argc)
	{
		soundalarm(argv[i]);
		i++;
	}
}

