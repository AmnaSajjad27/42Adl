#include <stdio.h>
#include <stdlib.h>

void ft_putendl_fd(char *s, int fd)
{
    char endline;
    
    if (s)
    {
        endline = '\n';
        while (*s != 0)
        {
            write(fd, s, 1);
            s++;
        }
        write (fd, &s, 1);
    }
}