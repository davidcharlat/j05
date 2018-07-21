int	ft_str_is_printable (char *str)	
{
	int cursor;
	int is_printable;

	cursor = 0;
	is_printable = 1;
	while (str[cursor] != '\0')
		cursor++;
	if (cursor > 0)
	{
		cursor--;
		while (cursor >= 0)	
		{
			if ((str[cursor] < 32) || (str[cursor] > 126))
				is_printable = 0;
			cursor--;
		}
	}
	return (is_printable);
}

