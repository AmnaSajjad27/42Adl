#include "ft_printf.h"

static int	ft_puthexlong(unsigned long n)
{
    int i;

    i = 0;

    // less than 16 from the ascii table 
    if (n < 16)
	{
        // more than 9 is the alphabets 
		if (n > 9)
            // n starts at 10
			i = i + ft_putchar(n + 87);
		else
            // 48 is 0 in the ascci table 
			i = i + ft_putchar(n + 48);
	}
	else if (n > 15)
	{
        // converting base 16
		i = i + ft_puthexlong(n / 16);
		i = i + ft_puthexlong(n % 16);
	}
	return (i);
}

int	ft_puthexp(void *p)
{
	int	i;

	i = 0;
	i = i + ft_putstr("0x");
	i = i + ft_puthexlong((unsigned long)p);
	return (i);
}