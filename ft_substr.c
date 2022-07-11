#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new_str;
    size_t  i;
    size_t  j;

    if (!s || !(new_str = (char *)malloc(len + 1)))
    {
        return (0);
    }
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
    {
        new_str[j++] = s[i++];
    }
    new_str[j] = '\0';
    return (new_str);
}
/*
int main()
{
    char src[] = "substr function Implementation";
 
    int m = 10;
    int n = 12;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
    works
}
*/