void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    // if lst not allocated properly, exit out of the function
    if (!lst)
    {
        return ;
    }
    // delete the node lst using the function given as a parameter
    delete (lst->content);
    // deallocate the memory held by lst
    free(lst);
}