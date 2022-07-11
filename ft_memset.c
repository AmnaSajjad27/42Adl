#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}
/*
int main() {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'a',1);
   puts(str);
}
*/