#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c){
    if (c >= 48 && c<= 57){
        return (1);
    }
    else
        return (0);
}

int main(void){
    int c = 47;
    printf("%d\n", ft_isdigit(c));
    printf("%d", isdigit(c));
} 