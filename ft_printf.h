#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int n);
int		ft_puthexu(unsigned int n);
int		ft_puthexp(void *p);
int		ft_putunsigned(unsigned int n);
int		ft_printf(const char *format, ...);

#endif