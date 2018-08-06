void	ft_putchar (char c);

void	ft_putnbr_hexbase(unsigned char nbr)
{
	char	result[18] = {0};
	char	base[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	int 	cursor;

	cursor = 0;
	while ((nbr != 0) && (cursor < 18))
	{
		result[cursor] = base[(nbr % 16)];
		nbr =(nbr / 16);
		cursor++;
	}
	while (cursor > 0)
	{
		cursor--;
		ft_putchar(result[cursor]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int cursor;

	cursor = 0;
	while (str[cursor])
	{		
		if ((str[cursor] > 31) && (str[cursor] < 127))
			ft_putchar(str[cursor]);
		else
		{
			ft_putchar('\\');
			if ((unsigned char)str[cursor] < 16)
				ft_putchar('0');
			ft_putnbr_hexbase((unsigned char)str[cursor]);
		}			
		cursor++;
	}
	ft_putchar('\n');
}
