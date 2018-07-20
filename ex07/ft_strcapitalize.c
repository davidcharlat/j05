char	*ft_strcapitalize(char *str)	
{
	int cursor;

	cursor = 0;
	while (str[cursor] != '\0')
		cursor++;
	if (cursor > 0)
		cursor--;
	while (cursor >= 1)	
	{
		if ((str[cursor - 1] < 48) || ((str[cursor - 1] > 57) && (str[cursor - 1] < 65)) || ((str[cursor - 1] > 90) && (str[cursor - 1] < 97)) || (str[cursor - 1] > 122))
		{
			if ((str[cursor] > 96) && (str[cursor] < 123))
				str[cursor] -= 32;
		}
		else
		{
			if ((str[cursor] > 64) && (str[cursor] < 91))
				str[cursor] += 32;
		}
		cursor--;
	}
	if ((str[cursor] > 96) && (str[cursor] < 123))
		str[cursor] -= 32;
	return (str);
}

