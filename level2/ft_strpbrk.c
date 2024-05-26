#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return (0);
}

int main()
{
	char s[] = "helloooo24425a";
	char j[] = "123456789";
	char *match = ft_strpbrk(s,j);
	printf("%s\n", match);
	return (0);
}
