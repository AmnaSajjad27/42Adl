#include <stdio.h>
#include <stdlib.h>
#include "ft_strdup.c"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned int i;

    if (!s && !f && !(str = ft_strdup(s)))
    {
        return (0);
    }
    i = 0;
    while (str[i])
    {
        str[i] = f(i,str[i]);
        i++;
    }
    return (str);
}


/*

int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int(*fp)(int, int);

	fp = add;
	printf("%d\n", fp(10, 20)); //30

	fp = mul;
	printf("%d\n", fp(10, 20)); //200
}
WORKS I THINK
*/