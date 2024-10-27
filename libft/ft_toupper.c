
#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c){
    if (c >= 97 && c <= 122)
        return (c - 32);
    else 
    return (c);
}

int main(void){
    int c = 101;
    printf("%d\n", ft_toupper(c));
    printf("%d\n", toupper(c));
}