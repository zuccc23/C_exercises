#include <stdlib.h>

typedef struct s_list t_list;
struct s_list{
    t_list *next;
    char *data;
};

t_list *ft_create_elem(char *data){
    t_list *newNode = malloc(sizeof(t_list));
    if (newNode == NULL)
        return (NULL);
    newNode->data = data;
    newNode->next = NULL;
    return (newNode);
}

void ft_list_push_front(t_list **begin_list, char *data){
    t_list *newNode = ft_create_elem(data);
    newNode->next = *begin_list;
    *begin_list = newNode;  
}