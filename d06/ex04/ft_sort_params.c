/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:41:49 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/19 19:41:51 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

void	check(char **argv, int i, int j)
{
	char	*temp;

	if (ft_strcmp(argv[i], argv[j]) > 0)
	{
		temp = argv[i];
		argv[i] = argv[j];
		argv[j] = temp;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			check(&*argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
