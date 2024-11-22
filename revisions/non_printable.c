#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str){
    int i = 0;
    int j = 0;
    int k = 0;
    char c;
    char d;
    char asc[] = "0123456789abcdef";
    while (str[i]){
        if (str[i] < 32 || str[i] > 126){
            write(1, "\\", 1);
            k = str[i];
            k /= 16;
            c = k + '0';
            ft_putchar(c);
            j = str[i] % 16;
            ft_putchar(asc[j]);
        }
        else {
            ft_putchar(str[i]);
        }
        i++;
    }
}

int main(void){
    char str[] = "bonjour \n aurevoir";
    ft_putstr_non_printable(str);
}