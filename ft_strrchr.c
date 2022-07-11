#include <stdio.h>
#include "ft_strlen.c"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    const char *ini;
    
    ini = s;
    i = ft_strlen(s);
    s = s + i;
    while (*s != *ini && c != *s)
    {
        s--;
        if (c != *s)
        {
            return((char *)s);
        }
    }
    return(0);
}
/*writeamain*/