unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int cursor;

	cursor = 0;
	while ((src[cursor] != '\0') && (cursor < (size - 1)))
		dest[cursor] = src[cursor++];
	dest[cursor] = '\0';
	return (cursor);
}
