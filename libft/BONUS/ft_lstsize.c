#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

t_list  *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);

int ft_lstsize(t_list *lst)
{
    int count;
    
    count = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        count++;
    }
    return (count);
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
    t_list  *current = NULL;
    int size;
    int content_1 = 0;
    int content_2 = 1;
    int content_3 = 2;
    int content_4 = 3;

    head = ft_lstnew(&content_1);
    current = head;
    current->next = ft_lstnew(&content_2);
    current = current->next;
    current->next = ft_lstnew(&content_3);
    current = current->next;
    current->next = ft_lstnew(&content_4);
    size = ft_lstsize(head);
    printf("Size = %d", size);
    return (0);  
}