#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

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
    t_list  *next;
    int content1 = 65;
    char    content2 = 'B';

    head = ft_lstnew(&content1);
    head->next = ft_lstnew(&content2);
    while (head != NULL)
    {
        printf("Node content: %c\n", *(int *)head->content);
        head = head->next;
    }
    printf("End of list.\n");
    current = head;
    while (current != NULL)
    {
        next = current->next;
        free(current->content);
        free(current);
        current = next;
    }
    head = NULL;
    return (0);
}