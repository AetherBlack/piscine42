#include <unistd.h>

void ft_print_reverse_alphabet(void) {

    int lettre = 122;

    while (lettre > 96) {
        write(1, &lettre, 1);
        lettre--;
    }
}

int main(void) {
    ft_print_reverse_alphabet();
    return (0);
}