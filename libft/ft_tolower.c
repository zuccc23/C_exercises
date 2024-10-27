
#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c){
    if (c >= 65 && c <= 90)
        return (c + 32);
    else 
    return (c);
}

int main(void){
    int c = 128;
    printf("%d\n", ft_tolower(c));
    printf("%d\n", tolower(c));
}