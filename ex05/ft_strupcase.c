char	*ft_strupcase(char *str)	
{
	int cursor;

	cursor = 0;
	while (str[cursor] != '\0')
	{
		if ((str[cursor] < 123) && (str[cursor] > 96))
			str[cursor] -= 32;
		cursor++;
	}

	return (str);
}
