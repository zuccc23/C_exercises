#include <stdio.h>
#include <stdlib.h>

int f(char *str){
    int i = 0;
    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            return (1);
        }
        i++;
    }
    return (0);
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

// char *str = "Daniya";
// char *strr = "Mario";
// char *strs[] = {"Daniya", "Mario", NULL};

int main(void){
    char *tab[]= {"bbbbe", "gyhdjzevdhc", NULL};
    printf("%d\n", ft_any(tab, &f));
}