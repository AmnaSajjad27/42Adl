int ft_lstsize(t_list *lst)
{
    // initalise variable to count the size of the list
    int lst_size;

    // initalise it to 0
    lst_size = 0;

    // using a while loop to count the nodes 
    while (lst)
    {
        lst = next->lst;
        lst_size++;
    }
    // returning the variable that holds the size of the list
    return (lst_size);
}