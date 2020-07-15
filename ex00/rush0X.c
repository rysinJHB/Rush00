void		rush0X(int	x, int	y)
{
	int		a;

	int		b;

	a	=	0;
	while(a <	x)
	{
		b = 0;
		while(b	<	y)
		{
			ft_putchar('*');
			b++;
		}
		ft_putchar('\n');	
		a++;
	}

}

