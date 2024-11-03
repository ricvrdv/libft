#include <stdio.h>
#include <stdlib.h>

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstdelone(t_list *lst, void (*del)(void *));
t_list  *ft_lstnew(void *content);

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *current;
    t_list  *next;

    if (lst == NULL || del == NULL)
        return ;
    current = *lst;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
        return ;
    (*del)(lst->content);
    free(lst);
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
    
}