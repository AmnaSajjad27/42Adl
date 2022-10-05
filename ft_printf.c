#include "printf.h"

int	check(const char character, va_list *args, int *i)
{
	if (character == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (character == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (character == 'd')
		return (ft_putnbr(va_arg(*args, int)));
	if (character == 'p')
		return (ft_puthexp(va_arg(*args, void *)));
	if (character == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (character == 'u')
		return (ft_putunsigned(va_arg(*args, unsigned int)));
	if (character == 'x')
		return (ft_puthexl(va_arg(*args, unsigned int)));
	if (character == 'X')
		return (ft_puthexu(va_arg(*args, unsigned int)));
	else if (character == '%')
		return (ft_putchar('%'));
	else
		(*i)--;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		i;
	int		len;

	va_start(arguments, format);
	i = 0;
	len = 0;
    // while loop to keep iteriating untill null temrinating 
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			len = len + check(format[i], &arguments, &i);
			i++;
		}
		else
		{
			len = len + ft_putchar(format[i]);
			i++;
		}
	}
	va_end(arguments);
    // we need to return length
	return (len);
}