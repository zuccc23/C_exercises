#include <stdio.h>
#include <stdlib.h>

int f(char *str){
    int i = 0;
    int count = 0;
    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
        i++;
    }
    return (count);
}

int ft_any(char **tab, int(*f)(char *)){
    int i = 0;
    while (tab[i] != NULL){
        if (f(tab[i]) == 1)
            return (1);
        i++;
    }
    return(0);
}

int ft_count_if(char **tab, int length, int(*f)(char*)){
    int i = 0;
    int count = 0;
    while (i < length){
        count += f(tab[i]);
        i++;
    }
    return(count);
}

// char *str = "Daniya";
// char *strr = "Mario";
// char *strs[] = {"Daniya", "Mario", NULL};

int main(void){
    int length = 3;
    char *tab[]= {"bbHHHbe", "gyhdjzHevdhc", "abc"};
    printf("%d\n", ft_count_if(tab, length, &f));
}