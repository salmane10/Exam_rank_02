int     max(int* tab, unsigned int len)
{
    if (!len)
        return (0);
    unsigned int i = 0;
    int j = tab[i];
    while (i < len)
    {
        if (j < tab[i])
            j = tab[i];
        i++;
    }
    return j;
}
