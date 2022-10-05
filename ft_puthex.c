#include "ft_printf.h"

int ft_puthex(unsigned int n)
{
    int i;

    i = 0;

    // base 16
    if (n < 16)
    {
        // 0 to 9 is the numbers the A to Z starts 
        if (n > 9)
        {
            // n starts at 10 
            i = i + ft_putchar(n + 87);
        }
        else
        {
            // 48 is just 0 in the hexdecimal table 
            i = i + ft_putchar(n + 48);
        }
    }
    // letters in ascii 
    else if (n > 15)
    {
        // recursively converting base 16 to using ft_hex
        i = i + ft_puthex(n / 16);
        i = i + ft_puthex(n % 16);
    }
    return (i);
}