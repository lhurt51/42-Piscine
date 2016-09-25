#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_first(char *av)
{
	int i;

	i = 0;
	while (av[i] <= 32 && av[i] != '\0')
		i++;
	while (av[i] > 32)
	{
		ft_putchar(av[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_first(argv[1]);
	ft_putchar('\n');
	return (0);
}