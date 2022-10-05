#include "ft_printf.h"

int	ft_puthexu(unsigned int n)
{
	int	i;

	i = 0;
    // 
	if (n < 16)
	{
        // more than 9 is the alphabets 
		if (n > 9)
            // 55 + 9 is A in the ascii table 
			i = i + ft_putchar(n + 55);
		else
            // 48 is 0 in the ascci table 
			i = i + ft_putchar(n + 48);
	}
	else if (n > 15)
	{
        // base 16, converting it 
		i = i + ft_puthexu(n / 16);
		i = i + ft_puthexu(n % 16);
	}
	return (i);
}