int	ft_str_is_lowercase (char *str)	
{
	int cursor;
	int is_lowercase;

	cursor = 0;
	is_lowercase = 1;
	while (str[cursor] != '\0')
		cursor++;
	if (cursor > 0)
	{
		cursor--;
		while (cursor >= 0)	
		{
			if ((str[cursor] < 97) || (str[cursor] > 122))
				is_lowercase = 0;
			cursor--;
		}
	}
	return (is_lowercase);
}

