#include "printf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    // return null if not a string 
    if (!str)
    {
        write(1,'null',6);
        return (6);
    }
    // while loop to keep going until null terminator 
    while (str[i] != '\0')
    {
        // Print string characters using a while loop
        write(1, str[i], 1);
        i++;
    }
    return(i);
}