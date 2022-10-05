#include "ft_printf.h"

int	ft_putnbr(int nb)
{
    int i;

    i = 0;
    if (nb == -2147483648)
    {
        // we print it and the store i to return 
        write(1, "2147483648", 11)
        i = 11;
    }
    else if(nb < 0)
    {
        i = i + ft_putchar('-');
		nb = nb * - 1;
		i = i + ft_putnbr(nb);
    }
    	else if (nb > 9)
	{
        // base 10
        // recursiuvely using ft_putnbr to divide through by 10
		i = i + ft_putnbr(nb / 10);
		i = i + ft_putnbr(nb % 10);
	}
	else
        // else if number is more than 9, add 48, 0 in ascci table 
		i = i + ft_putchar(nb + 48);
	return (i);
}