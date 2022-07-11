#include <stdio.h>
#include <stdlib.h>
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_substr.c"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;

    if(!s1 || !set)
    {
        return (0);
    }
    while (*s1 && ft_strchr(set,*s1))
    {
        s1++;
    }
    i = ft_strlen(s1);
    while (i && ft_strchr(set,s1[i]))
    {
        i--;
    }
    return (ft_substr(s1, 0 ,i + 1));
}
/*
int main()
{
    ft_strtrim("amna","a");
}
*/
/*dontwork??*/