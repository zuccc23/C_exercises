#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data){
    t_list *newNode = malloc(sizeof(t_list));
    newNode->data = data;
    newNode->next = NULL;
    return (newNode);
}

int main(void){

}