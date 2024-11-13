#include "../libft.h"

t_list  *ft_lstlast(t_list *lst)
{
        if (lst == NULL)
                return (NULL);
        while (lst->next != NULL)
                lst = lst->next;
        return (lst);
}

/*
int   main(void)
{
        t_list  *head = NULL;
        t_list  *current = NULL;
        char    content_1 = 'a';
        char    content_2 = 'b';
        char    content_3 = 'c';
        char    content_4 = 'd';

        head = ft_lstnew(&content_1);
        current = head;
        current->next = ft_lstnew(&content_2);
        current = current->next;
        current->next = ft_lstnew(&content_3);
        current = current->next;
        current->next = ft_lstnew(&content_4);
        current = head;
        printf("List:\n");
        while (current)
        {
                printf("%c -> ", *(int *)current->content);
                current = current->next;
        }
        printf("NULL\n");
        current = ft_lstlast(head);
        printf("Last node has value = %c\n", *(int *)current->content);
        while (head != NULL)
        {
                current = head;
                head = head->next;
                free(current);
        }
        return (0);
}
*/