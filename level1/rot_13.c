#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar((*str - 'a' + 13) % 26 + 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar((*str - 'A' + 13) % 26 + 'A');
		else
			write(1, str, 1);
		*str++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}
