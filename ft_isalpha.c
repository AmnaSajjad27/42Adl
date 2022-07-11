#include <stdio.h>

int ft_isalpha(int c)
{
        if (c > 64 && c < 91)
    {
        return (1);
    }
    else if (c > 96 && c < 123)
    {
        return (1);
    }
    else
    return(0);
}
/*
int main()
{
    int c = '8';
    int d = ft_isalpha(c);
    printf("%d",d);
}
*/