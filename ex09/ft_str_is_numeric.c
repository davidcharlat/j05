int	ft_str_is_numeric (char *str)	
{
	int cursor;
	int is_numeric;

	cursor = 0;
	is_numeric = 1;
	while (str[cursor] != '\0')
		cursor++;
	if (cursor > 0)
	{
		cursor--;
		while (cursor >= 0)	
		{
			if ((str[cursor] < 48) || (str[cursor] > 57))
				is_numeric = 0;
			cursor--;
		}
	}
	return (is_numeric);
}

