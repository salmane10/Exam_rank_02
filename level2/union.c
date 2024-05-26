#include <unistd.h>

int main(int ac, char **av)
{
    char set[128];
    int i = 0;
    int j = 0;
    while (i < 128)
    { 
        set[i] = 0;
        i++;
    }
    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (set[av[1][i]] == 0)
            {
                write(1, &av[1][i], 1);
                set[av[1][i]] = 1;
            }
            i++;
        }
        while (av[2][j])
        {
            if (set[av[2][j]] == 0)
            {
                write(1, &av[2][j], 1);
                set[av[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}