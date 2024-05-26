#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *s;
	int i = 0;
	int j = 0;
	while (src[i])
		i++;
	s = malloc(sizeof (char) * (i + 1));
	if (s)
	{
		while (src[j])
		{
			s[j] = src[j];
			j++;
		}
		s[j] = '\0';
	}
	return (s);
}
