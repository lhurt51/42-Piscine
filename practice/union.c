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
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (1);
}

int		check(char *str, int len, char check)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str[i] == check)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char **av)
{
	int i;
	int j;
	int len;
	char *str;

	i = 1;
	len = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (check(str, len, av[i][j]))
			{
				str[len] = av[i][j];
				len++;
			}
			j++;
		}
		i++;
	}
	str[len] = '\0';
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv);
	ft_putchar('\n');
	return (0);
}
