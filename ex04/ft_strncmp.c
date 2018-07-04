int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int cursor;

	cursor = 0;
	while (*(s1 + cursor) != '\0' && *(s1 + cursor) == *(s2 + cursor) && cursor < n)
	{
	if (cursor == n - 1)
		return (0);
	cursor ++;
	}
	return ((char)*(s1+cursor)-(char)*(s2+cursor));
}
