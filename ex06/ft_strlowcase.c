char	*ft_strlowcase(char *str)	
{
	int cursor;

	cursor = 0;
	while (str[cursor] != '\0')
	{
		if ((str[cursor] < 91) && (str[cursor] > 64))
			str[cursor] += 32;
		cursor++;
	}

	return (str);
}
