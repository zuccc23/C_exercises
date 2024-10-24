#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list){
    int count = 0;
    t_list *temp = begin_list;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return (count);
}

int main(void){
    t_list *begin_list = NULL;
    int data = 1;
    ft_list_push_front(&begin_list, &data);
    printf("%d", ft_list_size(begin_list));
}