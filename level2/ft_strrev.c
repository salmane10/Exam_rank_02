#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (str[i])
		i++;
	i -= 1;
	while(j < i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	return (str);
}
