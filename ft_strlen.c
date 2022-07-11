#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t length;

    length = 0;
    while(*s++ != 0)
    {
        length++;
    }
    return(length);
}
/*
int main()
{
    char string[] = "Hellooooooooooo";
   int c =  ft_strlen(string);
   printf("%d",c);

}
*/