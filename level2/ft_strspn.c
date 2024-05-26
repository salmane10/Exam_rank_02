#include <unistd.h>

char	*ft_strchr(const char *accept, size_t c)
{
	while(*accept)
	{
		if (*accept == c)
			return ((char*)accept);
		accept++;
	}
	return (0);
}

size_t	*ft_strspn(const char s, const char accept)
{
	size_t i = 0;
	while (s)
	{
		if (ft_strchr(accept, s[i]) == '\0')
			break;
		i++;
	}
	return (i);
}
		
