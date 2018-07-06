char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int cursor;

	cursor = 0;
	while ((src[cursor] != '\0') && (cursor < n))
			dest[cursor] = src[cursor++];
	while (cursor < n)
		dest[cursor++] = '\0';
	return (dest);
}
