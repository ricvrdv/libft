#include <stdio.h>
#include <stdlib.h>

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return ;
    new->next = *lst;
    *lst = new;
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

int main(void)
{
    t_list  *head = NULL;
    t_list  *current;
    char *content_1 = "Added first";
    char *content_2 = "Added second";
    char *content_3 = "Added third";
    char *content_4 = "Added last";

    head = ft_lstnew(content_1);
    head->next = ft_lstnew(content_2);
    ft_lstadd_front(&head, ft_lstnew(content_3));
    ft_lstadd_front(&head, ft_lstnew(content_4));
    current = head;
    while (current != NULL)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }
    printf("End of list.\n");
    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
    return (0);
}
