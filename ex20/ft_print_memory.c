void	ft_putchar(char c);

void	print_addr(unsigned int addr)
{
	char	result[8] = {0};
	char	base[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	int 	cursor;

	cursor = 0;
	while (cursor < 8)
	{
		result[cursor] = base[(addr % 16)];
		addr = (addr / 16);
		cursor++;
	}
	while (cursor > 0)
	{
		cursor--;
		ft_putchar(result[cursor]);
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	print_hex_values(int addr, int size)
{
	char	*ptr;
	int	i;
	char	base[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

	ptr = (char*)addr;
	i = 0;
	while ((i < 16) && (i < size))
	{
		ft_putchar(base[((unsigned char)ptr[i] / 16) % 16]);
		ft_putchar(base[((unsigned char)ptr[i] % 16)]);
		if ((i % 2) == 1)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\t');
}

void	print_values(int addr, int size)
{
	char	*ptr;
	int		i;

	ptr = (char*)addr;
	i = 0;
	while ((i < 16) && (i < size))
	{
			
		if ((ptr[i] < 32) || (ptr[i] > 126))
			ft_putchar('.');
		else
			ft_putchar(ptr[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	
	i = 0;
	while (i < size)
	{
		print_addr((unsigned int)addr + i);
		print_hex_values((int)addr + i, size - i);
		print_values((int)addr + i, size - i);
		ft_putchar('\n');
		i = i + 16;
	}
	if (size > 0)
		ft_putchar('\n');
	return (addr);
}


