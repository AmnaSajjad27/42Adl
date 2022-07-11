#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_memcpy.c"

char    *ft_strdup(const char *s1)
{
    char *s2;

    if (!(s2 = (char *)malloc(ft_strlen(s1) + 1)))
    {
        return (0);
    }
    ft_memcpy(s2, s1, ft_strlen(s1) + 1);
    return (s2);
}
/*
int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}
works
*/