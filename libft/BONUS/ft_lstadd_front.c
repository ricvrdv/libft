#include <stdio.h>
#include <stdlib.h>

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

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
    t_list  *node;
    t_list  *current;
    t_list  *next;
    char *content_1 = "added first";
    char *content_2 = "added second";
    char *content_3 = "added third";
    char *content_4 = "added fourth";

    node = ft_lstnew(&content_1);
    node->next = ft_lstnew(&content_2);
    ft_lstadd_front(&node, ft_lstnew(&content_3));
    ft_lstadd_front(&node, ft_lstnew(&content_4));
    while (node != NULL)
    {
        printf("Node content: %s\n", *(char **)node->content);
        node = node->next;
    }
    printf("End of list.\n");
    current = node;
    while (current != NULL)
    {
        next = current->next;
        free(current->content);
        free(current);
        current = next;
    }
    node = NULL;
    return (0);
}
