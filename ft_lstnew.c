#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    // initalise a new node
    t_list *new;

    // allocate memory for the new node
    new = (t_list *)malloc(sizeof(t_list));

    // if node didnt allocate properly, return out of the function
    if (!(new))
    {
        return ;
    }
    // the member variable content is initalised with value of parameter content 
    new->content = content;
    // the last one points to NULL
    new->next = NULL;
    // return the new node
    return (new);
}