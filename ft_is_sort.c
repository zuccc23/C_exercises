#include <stdio.h>

int f(int a, int b){
    return (a - b);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int)){
    int i = 0;

    while (i < length - 1){
        if (f(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;
    }
    return (1);
}

int main(void){
    int tab[] = {1, 2, 3, 3};
    int length = 4;

    printf("%d\n", ft_is_sort(tab, length, &f));
}