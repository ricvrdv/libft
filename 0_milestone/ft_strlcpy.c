size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	int	i;
	
	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize >= len + 1)
	{
		while (i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}	
