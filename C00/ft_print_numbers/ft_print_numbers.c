#include <unistd.h>

void ft_print_numbers(void) {

    int chiffre = 48;

    while (chiffre < 58) {
        write(1, &chiffre, 1);
        chiffre++;
    }
}

int main(void) {
    ft_print_numbers();
    return(0);
}