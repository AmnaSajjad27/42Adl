void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *last;

    // if not allocated properly, exit out of the function
    if(!*lst)
    {
        return ;
    }
    // 
    while (*lst)
    {
        // find the last node
        last = (*lst)->next
        // delete and free the last node
        ft_lstdelone(*lst, del);
        *lst = last;
    }
    //pointer to lst is set to NULL
    *lst = 0;
}