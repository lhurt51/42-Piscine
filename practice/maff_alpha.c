
#include <unistd.h>

void maff_alpha(void)
{
	char c;
	int i;

	i = 0;
	c = 'a';
	while (c <= 'z')
	{
		if (i % 2 == 1)
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		else
			write(1, &c, 1);
		i++;
		c++;
	}
}

int 	main(void)
{
	maff_alpha();
}