#include <stdio.h>

int ft_toupper(int c)
{
    if (c > 96 && c < 123)
    {
        return (c - 32);
    }
    else
    {
        return(c);
    }
}
/*
int main()
{
    int c = 'a';
    int a = ft_toupper(c);
    printf("%c",a);
}
*/