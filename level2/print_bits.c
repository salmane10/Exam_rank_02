#include <unistd.h>
void    print_bits(unsigned char octet)
{
    int i = 8;
    while (i--)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
}