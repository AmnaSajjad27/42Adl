#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
	while (n)
	{
		n /= 10;
		size++;
	}
	if (!(str = (char *)malloc(size + 1)))
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
/*
int main()
{
    int val;
    char strn1[] = "Saaa222";
 
    val = ft_itoa(strn1);
    printf("String value = %s\n", strn1);
    printf("Integer value = %d\n", val);
 
    char strn2[] = "GeeksforGeeks";
    val = ft_itoa(strn2);
    printf("String value = %s\n", strn2);
    printf("Integer value = %d\n", val);
 
    return (0);
}
WIERD OUTPUT
*/