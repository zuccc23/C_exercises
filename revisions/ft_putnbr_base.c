#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c){
    write(1, &c, 1);
}
int ft_strlen(char *str){
    int count = 0;
    int i = 0;

    while (str[i]){
        count++;
        i++;
    }return (count);
}
void ft_putnbr_base(int nbr, char *base){
    int size = ft_strlen(base);

    if (nbr < 0){
        write(1, "-", 1);
        nbr *= -1;
    }
    if (nbr >= size){
        ft_putnbr_base(nbr / size, base);
        ft_putchar(base[nbr % size]);
    }
    if (nbr < size){
        ft_putchar(base[nbr]);
    }
}
// nb = 17 / taille = 2            nb % taille = 2    == on

int main(void){
    char base[] = "01"; //8
    ft_putnbr_base(5, base);
    //printf("%d", ft_strlen(base));
}