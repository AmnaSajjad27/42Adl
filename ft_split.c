#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

static int  count(const char **str,char c)
{
    int i;
    int trigger;

    i = 0;
    trigger = 0;
    while (*str)
    {
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }
        else if(*str == c)
        {
            trigger = 0;
            i++;
        }
    }
    return (i);
}

static char *dup (const char *str,int start,int finish)
{
    char *word;
    int i;

    i = 0;
    word = malloc((finish - start) * sizeof(char));
    while (start < finish)
    {
        word[i++] = str[start++];
        word[i] = '\0';
    }
    return (word);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;

    int index;
    char **split;
    if (!s || !(split = malloc((count(s, c) + 1) * sizeof(char *))))
    {
        return (0);
    }
    i = 0;
    j = 0;
    index = -1;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
        {
            index = i;
        }
        else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
        {
            split[j++] = dup(s, index, i);
            {
                index = -1;
            }
            i++;
        }
    }
        split[j] = 0;
        return (split);
}
/*
int main() 
{
   char string[50] = "Hello world";
   // Extract the first token
   char * token = ft_split(string, " ");
   printf( " %s\n", token ); //printing the token
   return 0;
}
DONT WORK
*/

