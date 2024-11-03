#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    del_content(void *content);
t_list  *ft_lstnew(void *content);

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
        return ;
    (*del)(lst->content);
    free(lst);
}

void    del_content(void *content)
{
    free(content);
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
    t_list  *second = NULL;
    t_list  *third = NULL;
    t_list  *current;
    int *content_1 = malloc(sizeof(int));
    int *content_2 = malloc(sizeof(int));
    int *content_3 = malloc(sizeof(int));

    *content_1 = 1;
    *content_2 = 2;
    *content_3 = 3;
    head = ft_lstnew(content_1);
    second = ft_lstnew(content_2);
    third = ft_lstnew(content_3);
    head->next = second;
    second->next = third;
    printf("Initial list:\n");
    current = head;
    while (current)
    {
        printf("%d -> ", *(int*)current->content);
        current = current->next;
    }
    printf("NULL\n");
    ft_lstdelone(second, del_content);
    head->next = third;
    printf("List after deleting second node:\n");
    current = head;
    while (current)
    {
        printf("%d -> ", *(int*)current->content);
        current = current->next;
    }
    printf("NULL\n");
    ft_lstdelone(head, del_content);
    ft_lstdelone(third, del_content);
    return (0);
}