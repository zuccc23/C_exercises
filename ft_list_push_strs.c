#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs){
    int i = size - 1;
    t_list *newNode = ft_create_elem(strs[i]);
    t_list *temp = newNode;
    i--;
    while (i >= 0){
        temp = temp->next;
        temp = ft_create_elem(strs[i]);
        i--;
    }
    return (temp);
}

void print_list(t_list *head){
    t_list *temp = head;
    while (temp)
    while (temp != NULL){
        printf("%s\n", temp->data);
        temp = temp->next;
    }
}

int main(void){
    int size = 3;
    char *strs[] = {"abc", "def", "ghi"};
    t_list *newNode = ft_list_push_strs(size, strs);
    print_list(newNode);
    //printf("%s", newNode->data);
}