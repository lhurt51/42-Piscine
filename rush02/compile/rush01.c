#define X '*'
#define Y '*'
#define UL '/'
#define UR '\\'
#define DL '\\'
#define DR '/'
#define NUL ' '

void	ft_putchar(char c);

int position(int col, int row, int w, int h)
{
	int c;
	int t;

	c = NUL;
	if (row == 1)
	{
		t = (col == w) ? UR : X;
		c = (col == 1) ? UL : t;
	}
	else if (row == h)
	{
		t = (col == w) ? DR : X;
		c = (col == 1) ? DL : t;
	}
	else if (col == 1 || col == w)
		c = Y;
	return (c);
}

void rush(int w, int h)
{
	int row;
	int col;
	int c;

	row = 1;
	if (w < 0 || h < 0)
		return ;
	while (row <= h)
	{
		col = 1;
		while (col <= w)
		{	
			c = position(col, row, w, h);
			ft_putchar(c);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
