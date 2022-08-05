void ft_lstadd_back(t_list **lst, t_list *new)
{
    // intialise a variable to hold the last node
    t_list *last;

    // if not allocated properly, exist out of the function
    if (!new)
    {
        return ;
    }
    // if not allocated properly, allocate and exist out of the function
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    // use the function to find the last node and hold it in variable last
    *last = ft_lstlast(*lst);
    // put the last node into the back of the list
    last->next = new;
}