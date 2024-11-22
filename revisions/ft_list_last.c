#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list){
    t_list *temp = begin_list;
    while (temp->next != NULL){
        temp = temp->next;
    }
    return (temp);
}

int main(void){
    t_list *begin_list = NULL;
    int data = 1;
    ft_list_push_front(&begin_list, &data);
    //printf("%d", ft_list_size(begin_list));
}