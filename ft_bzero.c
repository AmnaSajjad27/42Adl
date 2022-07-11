#include <stdio.h>
#include "ft_memset.c"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s,'\0',n);
}
/*
works
*/