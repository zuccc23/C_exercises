#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data){
    t_list *newNode = ft_create_elem(data);
    newNode->next = *begin_list;
    *begin_list = newNode;  
}

int main(void){
    t_list *begin_list = NULL;
    int data = 1;
    ft_list_push_front(&begin_list, &data);
    printf("%p", begin_list->data);
}