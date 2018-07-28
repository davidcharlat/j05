int	ft_is_base_ok(char *base)
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
				|| (base[i] == '+') || (base[0] == '-') || (base[0] == '+'))
				return (0);
			i++;
		}
		cursor++;
	}
	return (1);
}

int	is_signed(char *str)
{
	if (str[0] == '-')
		return (-1);
	if (str[0] == '+')
		return (1);
	return (0);
}

int	check_and_numerize_str(char *str, char *base, int *result, int size)
{
	int cursor;
	int i;
	int test;

	test = 1;
	cursor = 0;
	i = 0;
	if (is_signed(str) != 0)
		size++;
	while ((cursor < size - (is_signed(str))*(is_signed(str))) && (test > 0))
	{
		while ((base[i]) && (test == 1) && (i < 66))
		{
			if (str[size - cursor - 1] == base[i])
			{
				result[cursor] = i;
				test = 2;
			}
			i++;
		}
		test = test - 1;
		cursor++;
		i = 0;
	}
	return (test);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int str_size;
	int	result[66]={0};
	int	cursor;
	int power;
	
	power = 1;
	cursor = 0;
	str_size = 0;
	while(str[str_size])
		str_size++;
	str_size = str_size - (is_signed (str) * is_signed (str));
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (check_and_numerize_str(str, base, result, str_size) && ft_is_base_ok(base))
	{
		while ((cursor < str_size))
		{
			result[65] = result[65] + (result[cursor] * power);
			power = power * base_size;
			cursor++;
		}
	}
	return (result[65] * (is_signed(str) * (1 - is_signed(str)) + 1));
}
