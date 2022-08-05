#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

		if (!s || !f)
			return (0);
		i = 0;
    while (s[i])
    {
			f(i, &s[i]);
			i++;
    }
}
/*
DONT KNOW IF ITS CORRECT
int main()
{

}
*/