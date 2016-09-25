/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 14:00:37 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/27 14:00:39 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	open_file(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE];

	fd = open(str, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	else
		open_file(argv[1]);
	return (1);
}
