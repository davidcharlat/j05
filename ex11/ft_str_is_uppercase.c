int	ft_str_is_uppercase (char *str)	
{
	int cursor;
	int is_uppercase;

	cursor = 0;
	is_uppercase = 1;
	while (str[cursor] != '\0')
		cursor++;
	if (cursor > 0)
	{
		cursor--;
		while (cursor >= 0)	
		{
			if ((str[cursor] < 65) || (str[cursor] > 90))
				is_uppercase = 0;
			cursor--;
		}
	}
	return (is_uppercase);
}

