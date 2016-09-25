/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 13:06:50 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/28 13:06:52 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat_file.h"
void	display_error(char str)
{
	while (str[i] != '\0')
	{
		if (str[i] == '/')
		{
			ft_putstr("./ft_cat: ");
			ft_putstr(str);
			ft_putstr(": Is a directory");
			ft_putstr("\n");
		}
	}
}

void	open_file(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("./ft_cat: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory");
		ft_putstr("\n");
		close(fd);
		return ;
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	ft_putchar('\n');
	close(fd);
	return ;
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		open_file(argv[i]);
		i++;
	}
}
