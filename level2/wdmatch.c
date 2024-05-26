#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        while (av[2][j] && av[1][i])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (av[1][i] == '\0')
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}