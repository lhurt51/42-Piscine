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

void	ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

int		atoi(char *str)
{
	long num;
	int neg;
	int i;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * neg);
}

void	display(int num, int answer, int i)
{
	ft_putnbr(i);
	ft_putstr(" x ");
	ft_putnbr(num);
	ft_putstr(" = ");
	ft_putnbr(answer);
}

void	tab_mult(int num)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		display(num, num * i, i);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(atoi(argv[1]));
	else
		ft_putchar('\n');
	return (0);
}