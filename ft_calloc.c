#include <stdio.h>
#include <stdlib.h>
#include "ft_memset.c"

void *ft_calloc(size_t count, size_t size)
{
    size_t tot_size;
    void *dst;

    tot_size = size * count;

    if (!(dst = malloc(tot_size)))
    {
        return (0);
    }
    ft_memset(dst,0,tot_size);
    return (dst);
}
/*
int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}
*/