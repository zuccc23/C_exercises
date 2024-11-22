#include <stdlib.h>
#include <stdio.h>

int add(int nb){
    nb += 1;
    return (nb);
}

int *ft_map(int *tab, int length, int(*f)(int)){
    int *tab2 = malloc(sizeof(int) * length);
    int i = 0;

    if (tab2 == NULL)
        return (NULL);
    while (i<length){
        tab2[i] = f(tab[i]);
        i++;
    }
    return (tab2);
}

int main(void){
    int tab[] = {1, 2, 3, 4};
    int i = 0;
    int length = 4;
    int *tab2 = ft_map(tab, length, &add);
    int *ft_map(int *tab, int length, int(*f)(int));
    while (i < length){
        printf("%d\n", tab2[i]);
        i++;
    }
    free(tab2);
}