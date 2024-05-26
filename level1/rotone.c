#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
			ft_putchar(*str + 1);
		else if (*str == 'z' || *str == 'Z')
			ft_putchar(*str - 25);
		else
			write(1, str, 1);
		*str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
