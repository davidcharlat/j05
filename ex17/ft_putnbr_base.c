int		ft_is_base_ok(char *base)
{
	int base_size;
	int cursor;
	int i;

	cursor = 0;
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (base_size < 2)
		return (0);
	while (cursor < base_size)
	{
		i = cursor + 1;
		while (i <= base_size)
		{
			if ((base[cursor] == base[i]) || (base[i] == '-')
				|| (base[i] == '+') || (base[0] == '-') || (base[0] == '+')
				|| (base[i] < 32) || (base[0] < 32) || (base[0] == 127)
				|| (base[i] == 127))
				return (0);
			i++;
		}
		cursor++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int 	sign;
	char	result[66]={0};
	int 	cursor;

	cursor = 0;
	sign = 1;
	if (nbr < 0)
		sign = -1;
	base_size = 0;
	while (base[base_size])
		base_size++;
	while ((nbr != 0) && (cursor < 66))
	{
		result[cursor] = base[(nbr % base_size) * sign];
		nbr = nbr / base_size;
		cursor++;
	}
	if ((sign == -1) && (ft_is_base_ok(base)))
		ft_putchar('-');
	while ((cursor > 0) && (ft_is_base_ok(base)))
	{
		cursor--;
		ft_putchar(result[cursor]);
	}
}
