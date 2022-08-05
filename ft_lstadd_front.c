#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    // if new isnt allocated properly, return the function
    if (!new)
    {
        return ;
    }
    // if lst isnt allocated properly, allocate it
    if (!lst)
    {
        *lst = new;
        return ;
    }
    // put the node new in front of the lst
    new->next = *lst;
    *lst = new;
}