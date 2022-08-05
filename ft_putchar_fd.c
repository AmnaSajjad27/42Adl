#include <stdio.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    char c = 'a';
    int fd = 'Bbb';
    ft_putchar_fd(c,fd);
}
IDK MAN
*/