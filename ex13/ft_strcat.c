char	*ft_strcat (char *dest, char *src)	
{
	int cursor;
	int dest_lenght;

	cursor = 0;
	dest_lenght = 0;
	while (dest[dest_lenght] != '\0')
		dest_lenght++;
	while (src[cursor] != '\0')
	{	
		dest[dest_lenght+cursor] = src[cursor];
		cursor++;
	}
	dest[dest_lenght+cursor] = '\0';
	return (dest);
}
