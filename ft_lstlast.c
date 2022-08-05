t_list *ft_lstlast(t_list *lst)
{
    // if not allocated properly, return out of the function
    if (!lst)
    {
        return ;
    }
    // using a while loop to keep moving to the next node and hold it in variable lst
    while (lst->next)
    {
        lst = lst->next;
    }
    // return the last node held in variable lst
    return (lst);
}