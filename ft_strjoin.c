#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    int i;
    int j;

    if (!s1 || !s2 || !(new_str = (char *)malloc(ft_strlen(s1)+ft_strlen(s2) + 1)))
    {
        return (0);
    }
    i = 0;
    while (s1[i] != '\0')
    {
        new_str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        new_str[i] = s2[j];
        i++;
        j++;
    }
    new_str[i] = '\0';
    return (new_str);
}
/*
int main () {
   char s1[10] = "This is s1";
   char s2[10] = "This is s2";

   printf("%s",ft_strjoin(s1,s2));
   
   return(0);
}
*/