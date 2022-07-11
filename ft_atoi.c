#include <stdio.h>
#include <string.h>

int ft_atoi(const char *str)
{
    int c;
    int s;
    int res;

    c = 0;
    s = 1;
    res = 0;
    while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t' || str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
    {
        c++;
        if (str[c] == '-' || str[c] == '+')
        {
            if (str[c] == '-')
            {
                s = -1;
                c++;
            }
        }
    }
    while (str[c] >= '0' && str[c] <= '9')
    {
        res = (res * 10) + (str[c] - '0');
        c++;
    }
    return (res * s);
}
/*
int main (void)
{
    int val;
    char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
*/