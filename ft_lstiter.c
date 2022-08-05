void ft_lstiter(t_list *lst, void (*f)(void *))
{
    // if not allocated properly, exit out of the function
    if (!lst || !f)
    {
        return ;
    }
    // iterating through the entire loop using a while loop
    while (lst)
    {
        // appling the function given as a parameter 
        f(lst->content);
        lst = lst->next;
    }
}