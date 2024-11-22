#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int i = 0;
    int temp = 0;

    while (i < size -1){
        if (tab[i] > tab[i+1]){
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
            i = -1;
        }
        i++;
    }
}

int main(){
    int size = 5;
    int i = 0;
    int tab[] = {2, 4, 1, 3, 1};
    ft_sort_int_tab(tab, size);
    while (i < size){
        printf("%d\n", tab[i]);
        i++;
    }
}