#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
    // more than 9 means alphabets
    // + 10 goes to lower case alphabets
	{
		i = i + ft_putnbr(n / 10);
		i = i + ft_putchar(n % 10 + 48);
	}
	else
    // numbers 0 to 10, we add 48, 0 in ascii table
	{
		i = i + ft_putchar(n + 48);
	}
	return (i);
}