unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	int cursor;
	int dest_lenght;
	int src_lenght;

	cursor = 0;
	dest_lenght = 0;
	src_lenght = 0;
	while (dest[dest_lenght] != '\0')
		dest_lenght++;
	while (src[src_lenght] != '\0')
		src_lenght++;
	while ((src[cursor] != '\0') && (cursor + dest_lenght < size))
	{	
		dest[dest_lenght+cursor] = src[cursor];
		cursor++;
	}
	dest[dest_lenght + cursor] = '\0';
	return (dest_lenght + src_lenght);	
}
