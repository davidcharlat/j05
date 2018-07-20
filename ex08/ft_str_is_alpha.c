int	ft_str_is_alpha (char *str)	
{
	int cursor;
	int is_alpha;

	cursor = 0;
	is_alpha = 1;
	while (str[cursor] != '\0')
		cursor++;
	if (cursor > 0)
	{
		cursor--;
		while (cursor >= 0)	
		{
			if (((str[cursor] < 97) || (str[cursor] > 122)) && ((str[cursor] < 65) || (str[cursor] > 90)))
				is_alpha = 0;
		cursor--;
		}
	}
	return (is_alpha);
}

