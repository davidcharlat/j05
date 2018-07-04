char	*ft_strstr(char *str, char *to_find)
{
	int cursor;
	int counter_same_char;
	int to_find_lenght;

	cursor = 0;
	to_find_lenght = 0;
	if (*to_find == '\0')
		return (str);
	while (*(to_find + to_find_lenght) != '\0')
			to_find_lenght++;
	while (*(str+cursor) != '\0')
	{
		counter_same_char = 0;
		while (str[cursor + counter_same_char] == to_find[counter_same_char])
		{
			counter_same_char++;
			if (counter_same_char == to_find_lenght)
				return (str + cursor);
		}
		cursor++;
	}
	return (0);
}
