/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 12:21:55 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/30 12:22:05 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		countcols(char *av, int *row)
{
	int fd;
	int col;
	int r;
	int i;
	char *str;
	char buff;

	r = 0;
	i = 0;
	col = 0;
	str = malloc(100);
	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buff, 1))
	{
		if (r == 2)
			break ;
		if (buff == '\n')
		{
			r++;
		}
		else if (r == 1)
			col++;
		else
		{
			str[i] = buff;
			i++;
		}
	}
	*row = (ft_atoi(str) + 1);
	free(str);
	close(fd);
	return (col);
}

void	storemap(char **str, char *av, int col)
{
	int i;
	int j;
	int cut;
	int fd;
	char buff[col];

	i = 0;
	j = 0;
	cut = 0;
	fd = open(av, O_RDONLY);
	str[i] = (char*)malloc(sizeof(char) * col);
	if (fd == -1)
		return ;
	while (read(fd, str[i], col))
	{
		i++;
		str[i] = (char*)malloc(sizeof(char) * col + 1);
	}
	str[i] = 0;
	close(fd);
}

char	**read_argv(char *av, int *col)
{
	int row;
	char **str;

	row = 0;
	*col = countcols(av, &row);
	str = (char**)malloc(sizeof(char*) * row);
	storemap(str, av, *col);
	return (str);
}

char	**read_stdin(int *col)
{
	int		fd;
	char	buf[BUFF_SIZE];
	int		ret;
	int		row;
	char	**str;
	int		count;

	count = 0;
	row = 0;
	fd = open("mymap.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (NULL);
	while ((ret = read(0, buf, BUFF_SIZE)))
		write(fd, buf, ret);
	close(fd);
	*col = countcols("mymap.txt", &row);
	str = (char**)malloc(sizeof(char*) * row);
	storemap(str, "mymap.txt", *col);
	return (str);
}

int main(int argc, char **argv)
{
	int	i;
	int size;
	int col;
	char ***map;

	col = 0;
	map = (char***)malloc(sizeof(char**) * argc);
	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			map[i - 1] = read_argv(argv[i], &col);
			i++;
		}
	else
		map[0] = read_stdin(&col);
	i = 1;
	while (i < argc)
	{
		solve(map[i - 1], col);
		i++;
	}
	return (0);
}
