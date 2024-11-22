#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs){
    int i = 0;
    t_list *newNode = ft_create_elem(strs[i]);
    t_list *temp;
    i++;
    while (i < size){
        temp = ft_create_elem(strs[i]);
        temp->next = newNode;
        newNode = temp;
        i++;
    }
    return (newNode);
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