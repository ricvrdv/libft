 #include <stdio.h>
 #include <stdlib.h>

 typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
 
 t_list  *ft_lstnew(void *content);
 t_list *ft_lstlast(t_list *lst);

  t_list *ft_lstlast(t_list *lst)
 {
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return (lst);
 }

 t_list  *ft_lstnew(void *content)
{
    t_list  *new_node;
    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

 int    main(void)
 {
    t_list  *head;
    t_list  *current;
    int content_1 = 0;
    int content_2 = 1;
    int content_3 = 2;

    head = ft_lstnew(&content_1);
    current = head;
    current->next = ft_lstnew(&content_2);
    current = current->next;
    current->next = ft_lstnew(&content_3);
    current = ft_lstlast(head);
    printf("Last node content: %d\n", *(int *)current->content);
    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
    return (0);
 }