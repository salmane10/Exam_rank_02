unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char bit;
    int i = 8;
    while (i--)
    {
        bit = bit * 2 + (octet % 2);
        octet = octet / 2;
    }
    return (bit);
}