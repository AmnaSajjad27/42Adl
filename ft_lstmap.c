t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    // initialise a new list
    t_list *new_list;
    // initalialise and allocate memory for a new node that holds content from parameter given
    t_list *elem;

    elem = elem = ft_lstnew(f(lst->content))
    // check for proper allocation 
    if (!lst)
    {
        return (0);
    }
    new_list = 0;
    while (lst)
    {
        // if elem is not allocated properly, then use ft_lstclear to clear the last node and set the pointer to lst to zero
        if (!elem)
        {
            ft_lstclear(&new_lst, del);
			return (0);
        }
        //put the last node in the back of the lst
        ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
    }
    // return the new list
    return (new_list);
}