#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb){
    char c;
    if (nb < 0){
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb < 10) {
        c = nb % 10 + '0';
        write(1, &c, 1);
    }
    if (nb > 9){
        ft_putnbr(nb/10);
        c = nb % 10 + '0';
        write(1, &c, 1);
    }

}

void ft_foreach(int *tab, int length, void(*f)(int)){
    int i = 0;
    while (i <length){
        f(tab[i]);
        i++;
    }
}

int main(void){
    //ft_putnbr(-1234);
    int tab[] = {1, 2, 3, 4};
    int length = 4;
    ft_foreach(tab, length, &ft_putnbr);
}